// FUN_0040d870 @ 0040d870 body=[[0040d870, 0040d94b]]


void FUN_0040d870(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  int *unaff_EDI;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x5c))();
  if (0 < (int)(unaff_EDI[1] - *unaff_EDI & 0xfffffffcU)) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00aae9af(0x128);
      uStack_c = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_0040bc50(iVar1,*(undefined4 *)(unaff_ESI + 0x84),
                             *(undefined4 *)(*unaff_EDI + iVar3 * 4),unaff_ESI);
      }
      uStack_c = 0xffffffff;
      (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x10))(uVar2,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI[1] - *unaff_EDI >> 2);
  }
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x38))(1);
  *(undefined1 *)(*(int *)(unaff_ESI + 0x88) + 0x140) = 0;
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x6c))();
  ExceptionList = pvStack_18;
  return;
}

