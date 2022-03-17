<?php

class StanfordPersonCest {

  /**
   * People
   */
  public function testPersonNode(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage('/node/add/stanford_person');
    $I->canSee('First Name');
  }

  /**
   * Test that the vocabulary and terms exist.
   */
  public function testVocabularyTermsExists(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage('/admin/structure/taxonomy/manage/stanford_person_types/overview');
    $I->canSeeResponseCodeIs(200);
  }

  /**
   * Test that the view pages exist.
   */
  public function testViewPagesExist(AcceptanceTester $I) {
    $I->runDrush('cache-rebuild');

    $I->createEntity([
      'vid' => 'stanford_person_types',
      'name' => 'Student',
      'description' => 'Student',
    ], 'taxonomy_term');

    $I->createEntity([
      'vid' => 'stanford_person_types',
      'name' => 'Staff',
      'description' => 'Staff',
    ], 'taxonomy_term');

    $I->runDrush('cache-rebuild');

    $I->amOnPage('/people');
    $I->canSeeResponseCodeIs(200);
    $I->see('Filter By Person Type');

    $I->amOnPage('/people/staff');
    $I->canSeeResponseCodeIs(200);
    $I->see('Filter By Person Type');
  }

  /**
   * Test that content that gets created has the right url, header, and shows
   * up in the all view.
   */
  public function testCreatePerson(AcceptanceTester $I) {
    $I->createEntity([
      'type' => 'stanford_person',
      'su_person_first_name' => 'John',
      'su_person_last_name' => 'Wick',
      'su_person_short_title' => 'Finisher of contracts',
    ]);
    $I->runDrush('cache-rebuild');
    $I->amOnPage('/person/john-wick');
    $I->see('John Wick');
    $I->see('Finisher of contracts');
    $I->amOnPage('/people');
    $I->see('John Wick');
  }

  /**
   * Test for the default image.
   */
  public function testDefaultImage(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage('/node/add/stanford_person');
    $I->fillField('First Name', 'John');
    $I->fillField('Last Name', 'Wayne');
    $I->fillField('Short Title', 'Cowboy');
    $I->click('Save');
    $I->canSeeInCurrentUrl('/person/john-wayne');
    $I->see('John Wayne', 'h1');
    $I->see('Cowboy');
    $I->seeElement('.field--name-su-person-photo');
  }

}
