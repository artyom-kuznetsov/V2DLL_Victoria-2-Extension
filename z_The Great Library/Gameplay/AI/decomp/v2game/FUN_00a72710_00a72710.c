// FUN_00a72710 @ 00a72710 body=[[00a72710, 00a72777] [00a72785, 00a72790]]


undefined4 FUN_00a72710(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EDI;
  
  puVar6 = unaff_EDI;
  if (0xf < (uint)unaff_EDI[5]) {
    puVar6 = (undefined4 *)*unaff_EDI;
  }
  uVar4 = 0;
  iVar5 = 0;
  if (0 < (int)unaff_EDI[4]) {
    do {
      pcVar1 = (char *)(iVar5 + (int)puVar6);
      iVar5 = iVar5 + 1;
      uVar4 = (uVar4 + (int)*pcVar1) * 0x3d;
    } while (iVar5 < (int)unaff_EDI[4]);
  }
  puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + (uVar4 % *(uint *)(param_1 + 4)) * 4);
  puVar2 = (undefined4 *)0x0;
  puVar3 = (undefined4 *)*puVar6;
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    if ((undefined4 *)*puVar3 == unaff_EDI) break;
    puVar2 = puVar3;
    puVar3 = (undefined4 *)puVar3[1];
  }
  if (puVar2 == (undefined4 *)0x0) {
    *puVar6 = puVar3[1];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar3);
  }
  puVar2[1] = puVar3[1];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(puVar3);
}

