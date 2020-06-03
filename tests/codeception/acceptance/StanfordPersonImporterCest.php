<?php

/**
 * Test the importer works.
 */
class StanfordPersonImporterCest {

  /**
   * Add credentials from environment variables and verify content is imported.
   */
  public function testImporter(AcceptanceTester $I) {
    $I->runDrush('pm:enable stanford_person_importer');
    $I->runDrush('cr');
    $I->logInWithRole('administrator');
    $I->amOnPage('/admin/structure/taxonomy/manage/cap_org_codes/add');
    $I->fillField('Name', 'Web Services');
    $I->fillField('su_cap_org_code[0][value]', 'BSWS');
    $I->click('Save');

    $I->amOnPage('/admin/config/people/person-importer');
    $I->fillField('CAP Username', getenv('CAP_USERNAME'));
    $I->fillField('CAP Password', getenv('CAP_PASSWORD'));
    $I->click('Save');

    $I->fillField('su_person_orgs[0][target_id]', 'Web Services');
    $I->fillField('su_person_workgroup[0][value]', 'uit:sws');
    $I->click('Save');
    $I->runDrush('migrate:import su_stanford_person');
    $I->amOnPage('/admin/content');
    $I->selectOption('Person', 'Content type');
    $I->click('Filter');
    $I->seeNumberOfElements('.views-table tr', [5, 50]);
  }

}
