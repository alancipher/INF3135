

     CUnit - A unit testing framework for C - Version 2.1-3
     http://cunit.sourceforge.net/


Suite: tp1_suite_de test
  Test: tester_angle_incidence_marge_v1 ...passed
  Test: tester_angle_incidence_marge_v2 ...FAILED
    1. tp1.c:86  - CU_ASSERT_FALSE(angle_incidence_marge_v2(0.2,-0.2))
    2. tp1.c:87  - CU_ASSERT_FALSE(angle_incidence_marge_v2(0.3, -0.2))
    3. tp1.c:88  - CU_ASSERT_FALSE(angle_incidence_marge_v2(2.5, 6.0))
    4. tp1.c:91  - CU_ASSERT_FALSE(angle_incidence_marge_v2(5.3,-9.0))
    5. tp1.c:92  - CU_ASSERT_FALSE(angle_incidence_marge_v2(-29.5, -26.1))
    6. tp1.c:95  - CU_ASSERT_FALSE(angle_incidence_marge_v2(5.3,9.5))
    7. tp1.c:96  - CU_ASSERT_FALSE(angle_incidence_marge_v2(29.5, 26.1))
  Test: tester_angle_incidence_marge_v3 ...FAILED
    1. tp1.c:107  - CU_ASSERT_FALSE(angle_incidence_marge_v3(0.2,-0.2))
    2. tp1.c:108  - CU_ASSERT_FALSE(angle_incidence_marge_v3(0.3, -0.2))
    3. tp1.c:109  - CU_ASSERT_FALSE(angle_incidence_marge_v3(2.5, 6.0))
    4. tp1.c:112  - CU_ASSERT_FALSE(angle_incidence_marge_v3(5.3,-9.0))
    5. tp1.c:113  - CU_ASSERT_FALSE(angle_incidence_marge_v3(-29.5, -26.1))
    6. tp1.c:116  - CU_ASSERT_FALSE(angle_incidence_marge_v3(5.3,9.5))
    7. tp1.c:117  - CU_ASSERT_FALSE(angle_incidence_marge_v3(29.5, 26.1))
  Test: tester_validation_etat_appareil_v1 ...FAILED
    1. tp1.c:30  - CU_ASSERT_FALSE(validation_etat_appareil_v1(-1))
    2. tp1.c:36  - CU_ASSERT_FALSE(validation_etat_appareil_v1(5))
  Test: tester_validation_etat_appareil_v2 ...FAILED
    1. tp1.c:41  - CU_ASSERT_FALSE(validation_etat_appareil_v2(-1))
    2. tp1.c:42  - CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_TARMAC))
    3. tp1.c:46  - CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_ETEINT))
  Test: tester_validation_etat_appareil_v3 ...passed
  Test: tester_tarmac_angle_conforme_v1 ...passed
  Test: tester_tarmac_angle_conforme_v2 ...FAILED
    1. tp1.c:152  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(0.3))
    2. tp1.c:153  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(-0.3))
    3. tp1.c:160  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(0.20001))
    4. tp1.c:161  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(-0.20001))
  Test: tester_tarmac_angle_conforme_v3 ...FAILED
    1. tp1.c:168  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(0.2))
    2. tp1.c:169  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(-0.2))
    3. tp1.c:170  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(0))
    4. tp1.c:176  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(0.1))
    5. tp1.c:177  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(-0.1))
  Test: tester_decollage_angle_conforme_v1 ...FAILED
    1. tp1.c:195  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(52))
    2. tp1.c:196  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(2))
    3. tp1.c:203  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(2.49))
    4. tp1.c:204  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(51.0001))
  Test: tester_decollage_angle_conforme_v2 ...passed
  Test: tester_decollage_angle_conforme_v3 ...FAILED
    1. tp1.c:230  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(2.5))
    2. tp1.c:231  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(51.0))
    3. tp1.c:232  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(25))
    4. tp1.c:238  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(50.5))
    5. tp1.c:239  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(3))
  Test: tester_vol_angle_conforme_v1 ...FAILED
    1. tp1.c:258  - CU_ASSERT_FALSE(vol_angle_conforme_v1(10))
    2. tp1.c:259  - CU_ASSERT_FALSE(vol_angle_conforme_v1(-10))
    3. tp1.c:266  - CU_ASSERT_FALSE(vol_angle_conforme_v1(-9.001))
    4. tp1.c:267  - CU_ASSERT_FALSE(vol_angle_conforme_v1(9.0001))
  Test: tester_vol_angle_conforme_v2 ...FAILED
    1. tp1.c:276  - CU_ASSERT_TRUE(vol_angle_conforme_v2(9.0))
    2. tp1.c:277  - CU_ASSERT_TRUE(vol_angle_conforme_v2(-9.0))
    3. tp1.c:278  - CU_ASSERT_TRUE(vol_angle_conforme_v2(0))
    4. tp1.c:284  - CU_ASSERT_TRUE(vol_angle_conforme_v2(8.5))
    5. tp1.c:285  - CU_ASSERT_TRUE(vol_angle_conforme_v2(-8.5))
  Test: tester_vol_angle_conforme_v3 ...passed
  Test: tester_atterrissage_angle_conforme_v1 ...passed
  Test: tester_atterrissage_angle_conforme_v2 ...FAILED
    1. tp1.c:348  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(0))
    2. tp1.c:349  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-30))
    3. tp1.c:356  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-0.49))
    4. tp1.c:357  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-29.5001))
  Test: tester_atterrissage_angle_conforme_v3 ...FAILED
    1. tp1.c:365  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-0.5))
    2. tp1.c:366  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-29.5))
    3. tp1.c:367  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-10))
    4. tp1.c:373  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-1))
    5. tp1.c:374  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-28))
  Test: tester_volet_ouvert_v1 ...passed
  Test: tester_volet_ouvert_v2 ...FAILED
    1. tp1.c:404  - CU_ASSERT_FALSE(volet_ouvert_v2(0.899999))
    2. tp1.c:405  - CU_ASSERT_TRUE(volet_ouvert_v2(0.91))
    3. tp1.c:406  - CU_ASSERT_TRUE(volet_ouvert_v2(2.0))
    4. tp1.c:407  - CU_ASSERT_FALSE(volet_ouvert_v2(0.02))
  Test: tester_volet_ouvert_v3 ...FAILED
    1. tp1.c:414  - CU_ASSERT_TRUE(volet_ouvert_v3(0.9))
    2. tp1.c:416  - CU_ASSERT_TRUE(volet_ouvert_v3(0.91))
    3. tp1.c:417  - CU_ASSERT_TRUE(volet_ouvert_v3(2.0))
  Test: tester_volet_ouverture_marge_v1 ...FAILED
    1. tp1.c:432  - CU_ASSERT_FALSE(volet_ouverture_marge_v1(0.9, 2.0))
    2. tp1.c:433  - CU_ASSERT_FALSE(volet_ouverture_marge_v1(2.0, 0.9))
  Test: tester_volet_ouverture_marge_v2 ...FAILED
    1. tp1.c:445  - CU_ASSERT_FALSE(volet_ouverture_marge_v2(0.9, 2.0))
    2. tp1.c:446  - CU_ASSERT_FALSE(volet_ouverture_marge_v2(2.0, 0.9))
  Test: tester_volet_ouverture_marge_v3 ...passed
  Test: tester_stabilisateur_horizontal_conforme_v1 ...FAILED
    1. tp1.c:474  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(-1.9))
    2. tp1.c:475  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(1.9))
    3. tp1.c:476  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(-1))
    4. tp1.c:477  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(1))
    5. tp1.c:478  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(0))
    6. tp1.c:479  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(1.9001))
    7. tp1.c:480  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(-1.9001))
    8. tp1.c:481  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(2))
    9. tp1.c:482  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(-3))
  Test: tester_stabilisateur_horizontal_conforme_v2 ...FAILED
    1. tp1.c:493  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(-1.9))
    2. tp1.c:494  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(1.9))
    3. tp1.c:495  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(-1))
    4. tp1.c:496  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(1))
    5. tp1.c:497  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(0))
  Test: tester_stabilisateur_horizontal_conforme_v3 ...FAILED
    1. tp1.c:515  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(1.9001))
    2. tp1.c:516  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(-1.9001))
    3. tp1.c:517  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(2))
    4. tp1.c:518  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(-3))

Run Summary:    Type  Total    Ran Passed Failed Inactive
              suites      1      1    n/a      0        0
               tests     27     27      8     19        0
             asserts    222    222    138     84      n/a

Elapsed time =    0.000 seconds


  1. tp1.c:86  - CU_ASSERT_FALSE(angle_incidence_marge_v2(0.2,-0.2))
  2. tp1.c:87  - CU_ASSERT_FALSE(angle_incidence_marge_v2(0.3, -0.2))
  3. tp1.c:88  - CU_ASSERT_FALSE(angle_incidence_marge_v2(2.5, 6.0))
  4. tp1.c:91  - CU_ASSERT_FALSE(angle_incidence_marge_v2(5.3,-9.0))
  5. tp1.c:92  - CU_ASSERT_FALSE(angle_incidence_marge_v2(-29.5, -26.1))
  6. tp1.c:95  - CU_ASSERT_FALSE(angle_incidence_marge_v2(5.3,9.5))
  7. tp1.c:96  - CU_ASSERT_FALSE(angle_incidence_marge_v2(29.5, 26.1))
  8. tp1.c:107  - CU_ASSERT_FALSE(angle_incidence_marge_v3(0.2,-0.2))
  9. tp1.c:108  - CU_ASSERT_FALSE(angle_incidence_marge_v3(0.3, -0.2))
  10. tp1.c:109  - CU_ASSERT_FALSE(angle_incidence_marge_v3(2.5, 6.0))
  11. tp1.c:112  - CU_ASSERT_FALSE(angle_incidence_marge_v3(5.3,-9.0))
  12. tp1.c:113  - CU_ASSERT_FALSE(angle_incidence_marge_v3(-29.5, -26.1))
  13. tp1.c:116  - CU_ASSERT_FALSE(angle_incidence_marge_v3(5.3,9.5))
  14. tp1.c:117  - CU_ASSERT_FALSE(angle_incidence_marge_v3(29.5, 26.1))
  15. tp1.c:30  - CU_ASSERT_FALSE(validation_etat_appareil_v1(-1))
  16. tp1.c:36  - CU_ASSERT_FALSE(validation_etat_appareil_v1(5))
  17. tp1.c:41  - CU_ASSERT_FALSE(validation_etat_appareil_v2(-1))
  18. tp1.c:42  - CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_TARMAC))
  19. tp1.c:46  - CU_ASSERT_TRUE(validation_etat_appareil_v2(ETAT_ETEINT))
  20. tp1.c:152  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(0.3))
  21. tp1.c:153  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(-0.3))
  22. tp1.c:160  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(0.20001))
  23. tp1.c:161  - CU_ASSERT_FALSE(tarmac_angle_conforme_v2(-0.20001))
  24. tp1.c:168  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(0.2))
  25. tp1.c:169  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(-0.2))
  26. tp1.c:170  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(0))
  27. tp1.c:176  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(0.1))
  28. tp1.c:177  - CU_ASSERT_TRUE(tarmac_angle_conforme_v3(-0.1))
  29. tp1.c:195  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(52))
  30. tp1.c:196  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(2))
  31. tp1.c:203  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(2.49))
  32. tp1.c:204  - CU_ASSERT_FALSE(decollage_angle_conforme_v1(51.0001))
  33. tp1.c:230  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(2.5))
  34. tp1.c:231  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(51.0))
  35. tp1.c:232  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(25))
  36. tp1.c:238  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(50.5))
  37. tp1.c:239  - CU_ASSERT_TRUE(decollage_angle_conforme_v3(3))
  38. tp1.c:258  - CU_ASSERT_FALSE(vol_angle_conforme_v1(10))
  39. tp1.c:259  - CU_ASSERT_FALSE(vol_angle_conforme_v1(-10))
  40. tp1.c:266  - CU_ASSERT_FALSE(vol_angle_conforme_v1(-9.001))
  41. tp1.c:267  - CU_ASSERT_FALSE(vol_angle_conforme_v1(9.0001))
  42. tp1.c:276  - CU_ASSERT_TRUE(vol_angle_conforme_v2(9.0))
  43. tp1.c:277  - CU_ASSERT_TRUE(vol_angle_conforme_v2(-9.0))
  44. tp1.c:278  - CU_ASSERT_TRUE(vol_angle_conforme_v2(0))
  45. tp1.c:284  - CU_ASSERT_TRUE(vol_angle_conforme_v2(8.5))
  46. tp1.c:285  - CU_ASSERT_TRUE(vol_angle_conforme_v2(-8.5))
  47. tp1.c:348  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(0))
  48. tp1.c:349  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-30))
  49. tp1.c:356  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-0.49))
  50. tp1.c:357  - CU_ASSERT_FALSE(atterrissage_angle_conforme_v2(-29.5001))
  51. tp1.c:365  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-0.5))
  52. tp1.c:366  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-29.5))
  53. tp1.c:367  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-10))
  54. tp1.c:373  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-1))
  55. tp1.c:374  - CU_ASSERT_TRUE(atterrissage_angle_conforme_v3(-28))
  56. tp1.c:404  - CU_ASSERT_FALSE(volet_ouvert_v2(0.899999))
  57. tp1.c:405  - CU_ASSERT_TRUE(volet_ouvert_v2(0.91))
  58. tp1.c:406  - CU_ASSERT_TRUE(volet_ouvert_v2(2.0))
  59. tp1.c:407  - CU_ASSERT_FALSE(volet_ouvert_v2(0.02))
  60. tp1.c:414  - CU_ASSERT_TRUE(volet_ouvert_v3(0.9))
  61. tp1.c:416  - CU_ASSERT_TRUE(volet_ouvert_v3(0.91))
  62. tp1.c:417  - CU_ASSERT_TRUE(volet_ouvert_v3(2.0))
  63. tp1.c:432  - CU_ASSERT_FALSE(volet_ouverture_marge_v1(0.9, 2.0))
  64. tp1.c:433  - CU_ASSERT_FALSE(volet_ouverture_marge_v1(2.0, 0.9))
  65. tp1.c:445  - CU_ASSERT_FALSE(volet_ouverture_marge_v2(0.9, 2.0))
  66. tp1.c:446  - CU_ASSERT_FALSE(volet_ouverture_marge_v2(2.0, 0.9))
  67. tp1.c:474  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(-1.9))
  68. tp1.c:475  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(1.9))
  69. tp1.c:476  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(-1))
  70. tp1.c:477  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(1))
  71. tp1.c:478  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v1(0))
  72. tp1.c:479  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(1.9001))
  73. tp1.c:480  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(-1.9001))
  74. tp1.c:481  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(2))
  75. tp1.c:482  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v1(-3))
  76. tp1.c:493  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(-1.9))
  77. tp1.c:494  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(1.9))
  78. tp1.c:495  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(-1))
  79. tp1.c:496  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(1))
  80. tp1.c:497  - CU_ASSERT_FALSE(stabilisateur_horizontal_conforme_v2(0))
  81. tp1.c:515  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(1.9001))
  82. tp1.c:516  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(-1.9001))
  83. tp1.c:517  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(2))
  84. tp1.c:518  - CU_ASSERT_TRUE(stabilisateur_horizontal_conforme_v3(-3))

