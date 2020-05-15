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
   * Test that the default content has installed and is unpublished.
   */
  public function testDefaultContentExists(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage("/admin/content");
    $I->see("Haley Jackson");
    $I->amOnPage("/person/haley-jackson");
    $I->see("Haley Jackson");
  }

  /**
   * Test that the vocabulary and terms exist.
   */
  public function testVocabularyTermsExists(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage("/admin/structure/taxonomy/manage/stanford_person_types/overview");
    $I->canSeeNumberOfElements(".term-id", 14);
  }

  /**
   * Test that the view pages exist.
   */
  public function testViewPagesExist(AcceptanceTester $I) {
    $I->amOnPage("/people");
    $I->see("Sorry, no results found");
    $I->seeLink('Student');
    $I->click("a[href='/people/staff']");
    $I->canSeeResponseCodeIs(200);
    $I->see("Sorry, no results found");
    $I->see("Filter By Person Type");
  }

  /**
   * Test that content that gets created has the right url, header, and shows
   * up in the all view.
   */
  public function testCreatePerson(AcceptanceTester $I) {
    $I->createEntity([
      'type' => 'stanford_person',
      'su_person_first_name' => "John",
      'su_person_last_name' => "Wick",
    ]);
    $I->amOnPage("/person/john-wick");
    $I->see("John Wick");
    $I->amOnPage("/people");
    $I->see("John Wick");
  }

}
