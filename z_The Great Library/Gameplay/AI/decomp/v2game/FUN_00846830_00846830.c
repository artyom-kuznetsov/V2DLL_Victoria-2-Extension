// FUN_00846830 @ 00846830  (requested 00846830, first bytes: 55 8B EC 81 EC A4 00 00)


void FUN_00846830(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int unaff_ESI;
  int *unaff_EDI;
  undefined1 local_a4 [8];
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined1 *local_38;
  undefined4 local_30;
  int local_2c;
  undefined1 local_14 [4];
  uint *local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_9c = *(undefined4 *)(unaff_ESI + 0x18);
  local_98 = *(undefined4 *)(unaff_ESI + 0x1c);
  local_54 = *(undefined4 *)(unaff_ESI + 0x20);
  local_38 = local_a4;
  local_8 = 0;
  local_50 = *(undefined4 *)(unaff_ESI + 0x24);
  local_10 = (uint *)(DAT_012588e8 + 0xadc);
  piVar4 = (int *)*local_10;
  *unaff_EDI = 0;
  local_c = 0x2d2d2d;
  while (((int *)*local_10 <= piVar4 && (piVar4 < (int *)local_10[1]))) {
    local_30 = *(undefined4 *)(*piVar4 + 0x1c);
    iVar1 = *(int *)(*piVar4 + 0x20);
    piVar4 = piVar4 + 1;
    if ((iVar1 != 0) &&
       ((((char)local_30 != 'R' || ((char)((uint)local_30 >> 8) != 'E')) ||
        ((char)((uint)local_30 >> 0x10) != 'B')))) {
      local_2c = iVar1;
      *(undefined4 *)(local_38 + 0x2c) = local_30;
      *(int *)(local_38 + 0x30) = iVar1;
      if ((((param_4 == 0) || (*(int *)(param_4 + 0x14) == iVar1)) &&
          (cVar2 = (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xc) + 0xd8) + 0x18))(local_5c),
          cVar2 != '\0')) &&
         ((param_2 == 0 || (cVar2 = FUN_0093c6f0(&local_30,0,0), cVar2 == '\0')))) {
        piVar3 = (int *)FUN_00846c40(local_14,param_1,param_2,&local_30,
                                     *(undefined4 *)(unaff_ESI + 0xc),&local_30,param_3);
        if (*unaff_EDI < *piVar3) {
          local_8 = local_2c;
          *unaff_EDI = *piVar3;
          local_c = local_30;
        }
      }
    }
  }
  if (0 < *unaff_EDI) {
    *(undefined4 *)(unaff_ESI + 0x10) = local_c;
    *(int *)(unaff_ESI + 0x14) = local_8;
  }
  return;
}

