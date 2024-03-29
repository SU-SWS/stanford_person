# Stanford Person

9.0.0
--------------------------------------------------------------------------------
_Release Date: 2022-07-12_

- Updated field encypt module to 3.0

8.1.21
--------------------------------------------------------------------------------
_Release Date: 2022-07-08_

- fixed composer namespace to lowercase
- Fix API calls when the token is invalid (#169)
- Removing fixed patch
- Merge branch 'master' into 8.x

8.x-1.20
--------------------------------------------------------------------------------
_Release Date: 2022-05-12_

- Removed merged patch for menu_link_weight module

8.x-1.19
--------------------------------------------------------------------------------
_Release Date: 2022-05-02_

- Updated dev dependencies (#166)
- D8CORE-5729: People list style updates (#165)
- Update CHANGELOG.md (#162)
- D8CORE-5758: updating styles to match change to a list (#163)
- Fix: dont remove ~ in workgroups for the importer.


8.x-1.18
--------------------------------------------------------------------------------
_Release Date: 2022-03-17_

- Update SHS module
- Updated views_infinite_scroll module (#157)
- Removed D8 Tests


8.x-1.17
--------------------------------------------------------------------------------
_Release Date: 2021-11-19_

- D8CORE-4864: making the selector more specific to only get the /people list page rather than paragraph lists (#153)


8.x-1.16
--------------------------------------------------------------------------------
_Release Date: 2021-09-03

- D8CORE-3161: change the load more button to primary (#151)
- D8CORE-4643: updating the skip links and moving to one filter by menu (#150)

8.x-1.15
--------------------------------------------------------------------------------
_Release Date: 2021-07-09_

- D8CORE-4508: adding skip to main on the topic menu (#147) (93a9842)
- D8CORE-4393: fixing the filtered people list (#146) (df631c3)
- D8CORE-4378: adding the skip to secondary link on person (#145) (a248a08)

8.x-1.14
--------------------------------------------------------------------------------
_Release Date: 2021-06-11_

- D8CORE-4341: changing display from flex to grid (#143) (0936dd3)

8.x-1.13
--------------------------------------------------------------------------------
_Release Date: 2021-05-07_

- Fixed cap API parameter string (#141) (06cdedd)

8.x-1.12
--------------------------------------------------------------------------------
_Release Date: 2021-03-05_

- Add "include child orgs" checkbox for cap org importer (#139) (81a8c3e)
- D8C0RE-2954: adding a little padding between image and name (#137) (6dfec9d)

8.x-1.11
--------------------------------------------------------------------------------
_Release Date: 2021-02-16_

- D8CORE-3512 Fixed bottom margin in view lists.

8.x-1.10
--------------------------------------------------------------------------------
_Release Date: 2021-02-08_

- D8CORE-3452: removing extra space when putting the view in a paragraph list (#133) (aba0569)
- D8CORE-2750: fixing the heading spacing (#132) (ddf9cce)
- Pass the ps parameter when alot of sunets are to be imported (#131) (687d231)
- Updated circleci testing (#130) (bfb7587)

8.x-1.9
--------------------------------------------------------------------------------
_Release Date: 2020-12-04_

- D8CORE-2727: js solution for the repeating label issue. (#127) (f814bde)
- Updated default content module (#126) (1c7e189)
- D8CORE-2851: fixup for the person node col. (#124) (998c10c)
- Update tests for D9 phpunit (#125) (20b82c7)
- phpunit void return annoation (51242cb)

8.x-1.8
--------------------------------------------------------------------------------
_Release Date: 2020-11-06_

- D8CORE-2002: unset "required" attribute on interests and affiliations field group. (#121) (e3bdb53)
- D8CORE-2664: Delete 1x1 profile images and invalidate the content to reimport (#120) (beef624)
- Adjusted the person importer to update the media item correctly (#119) (2ba9609)
- D8CORE-2829: removing the white from the the icon (#117) (72232a4)
- Fixed post update hook (212d790)
- D8CORE-2470 Use the default image on any imported content without an image (#118) (5a97677)

8.x-1.7
--------------------------------------------------------------------------------
_Release Date: 2020-10-05_

- D8CORE-2531: Fixing the header for the people node (#114) (c9957fd)
- D8CORE-2650: Fixing the spacing on the node for SOE and Basic (#115) (a49e3ca)
- D8CORE-2651: adding spacing below filter menu so does not touch (#112) (c02dabd)
- D8CORE-2185: matching the people edit button to the same as news (#113) (0c96985)
- D8CORE-2349: updating person list view to a single link (#111) (6e28a3a)
- CAP-52 Map 4 more fields from cap API (#110) (6bd8ba4)

8.x-1.5
--------------------------------------------------------------------------------
_Release Date: 2020-09-09_

- D8CORE-2535: Change sort on interior pages to be by last name first (#107) (b283467)
- D8CORE-000 Adjusted regext to retain numbers in workgroups and org codes (#106) (70e30d8)
- D8CORE-2499 Updated composer license (#105) (016ab46)

8.x-1.4
--------------------------------------------------------------------------------
_Release Date: 2020-08-07_

- D8ORE-2368 D8CORE-2367: fixing spacing on the people node (#103) (a7d4a8f)
- Removed views_taxonomy_term_name_depth thats not used (#102) (cb6c6bc)

8.x-1.3
--------------------------------------------------------------------------------
_Release Date: 2020-07-15_

- Bug fix for default content.

8.x-1.2
--------------------------------------------------------------------------------
_Release Date: 2020-07-13_

- D8CORE-2228: Merge pull request (#95) (b0a6b66)
- D8CORE-2007: Merge pull request (#98) (e0ee2d9)
- D8CORE-2007: removing the span as a wrapper (ea22866)
- D8CORE-2099: Required fields and default profile image. (#94) (1ad68da)
- D8CORE-2049: Change telephone to contact. (#97) (63263d0)
- D8CORE-2070: fixing and making the MS spacing consistent on accelerant headers. (#96) (aeaf554)
- Moved field to root module. (ac6000f)
- D8CORE-2049: change telephone to contact (ff6f3a4)
- D8CORE-2070: fixing and making the MS spacing consistent on accelerant headers (ace3151)
- D8CORE-2228: adding the nav and aria tag so menu show in Landmarks menu (ea1b8fc)

8.x-1.1
--------------------------------------------------------------------------------
_Release Date: 2020-06-17_

- D8CORE-1736: cap.stanford.edu importer integration (#91) (75bcdd4)

8.x-1.0
--------------------------------------------------------------------------------
_Release Date: 2020-05-15_

- Initial Drupal 8 Release!
- For more information see the release: https://userguide.sites.stanford.edu/tour/person
