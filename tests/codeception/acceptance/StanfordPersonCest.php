<?php

class StanfordPersonCest {

  public function testPersonNode(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
    $I->amOnPage('/node/add/stanford_person');
    $I->canSee('First Name');
  }

}
