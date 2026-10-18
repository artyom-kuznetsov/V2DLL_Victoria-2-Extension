// FUN_004ceae0 @ 004ceae0 body=[[004ceae0, 004cebff]]


void FUN_004ceae0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int unaff_ESI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00baf6e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar3 = (**(code **)(**(int **)(unaff_ESI + 0x188) + 0x24))();
  if (cVar3 != '\0') {
    FUN_004cec00(*(undefined4 *)(unaff_ESI + 0x188),unaff_ESI);
  }
  puVar2 = DAT_01258728;
  *(int *)(unaff_ESI + 0x188) = param_1;
  if (puVar2 == (undefined4 *)0x0) {
    DAT_01258728 = (undefined4 *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (undefined4 *)0x0) {
      DAT_01258728 = (undefined4 *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  FUN_004c2520();
  iVar1 = *(int *)(unaff_ESI + 400);
  if (iVar1 < 1) {
    if (0 < *(int *)(param_1 + 0x84)) {
      *(int *)(unaff_ESI + 400) = *(int *)(param_1 + 0x84);
    }
  }
  else if (*(int *)(param_1 + 0x84) < iVar1) {
    *(int *)(param_1 + 0x84) = iVar1;
  }
  if (*(char *)(unaff_ESI + 0x2a0) != '\0') {
    if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 300) * 4) + 0xbc0) ==
         '\0') && (*(int *)(unaff_ESI + 400) < 1)) {
      FUN_004bba40(unaff_ESI);
    }
    else {
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
  }
  FUN_004e9b90();
  FUN_004d2480();
  ExceptionList = local_10;
  return;
}

