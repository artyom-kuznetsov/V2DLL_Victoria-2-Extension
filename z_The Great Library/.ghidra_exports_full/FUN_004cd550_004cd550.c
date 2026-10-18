// FUN_004cd550 @ 004cd550 body=[[004cd550, 004cd5e6]]


void FUN_004cd550(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_EDI;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x98);
  do {
    if (*piVar2 == unaff_EDI[1]) {
      *(undefined4 *)(param_1 + 0xa0 + iVar1 * 0x1c) = param_2;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
  } while (iVar1 < 4);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x98);
  do {
    if (*piVar2 == 0) {
      param_1 = param_1 + iVar1 * 0x1c;
      *(undefined4 *)(param_1 + 0x94) = *unaff_EDI;
      *(undefined4 *)(param_1 + 0x98) = unaff_EDI[1];
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = param_2;
      *(undefined4 *)(param_1 + 0xa4) = DAT_01259abc;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 7;
  } while (iVar1 < 4);
  return;
}

