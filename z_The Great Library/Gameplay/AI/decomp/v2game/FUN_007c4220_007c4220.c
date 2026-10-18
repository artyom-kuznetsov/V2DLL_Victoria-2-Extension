// FUN_007c4220 @ 007c4220 body=[[007c4220, 007c42b8] [007c42c2, 007c42ed] [007c42f1, 007c431f]]


void FUN_007c4220(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b597b0;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *in_ECX = CPopView::vftable;
  local_8 = 0xe;
  FUN_007bfe20();
  piVar1 = (int *)in_ECX[0x29];
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    iVar3 = in_ECX[0x13];
    piVar1 = (int *)piVar1[2];
    puVar4 = (undefined4 *)FUN_009e6960(iVar3 + 0x424,iVar2 + 4);
    (**(code **)(*(int *)*puVar4 + 0x50))();
    FUN_009e6760(iVar3 + 0x424,iVar2 + 4);
  }
  (**(code **)(*(int *)in_ECX[0x13] + 0x88))();
  if (in_ECX[0x29] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x29]);
  }
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x7c] = CWindowObserver::vftable;
  if (in_ECX[0x75] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x75]);
  }
  in_ECX[0x75] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  in_ECX[0x6a] = CButtonObserver::vftable;
  FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x5c]);
}

