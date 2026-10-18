// FUN_005d1750 @ 005d1750  (requested 005D1750, first bytes: 83 B9 EC 00 00 00 00 75)


void FUN_005d1750(void)

{
  int in_ECX;
  undefined4 *unaff_ESI;
  
  if (*(int *)(in_ECX + 0xec) == 0) {
    *unaff_ESI = 0;
    return;
  }
  FUN_005d1790(unaff_ESI,*(undefined4 *)(in_ECX + 0xdc));
  return;
}

