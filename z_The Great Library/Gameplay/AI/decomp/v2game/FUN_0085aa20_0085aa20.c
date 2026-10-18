// FUN_0085aa20 @ 0085aa20 body=[[0085aa20, 0085aa4c] [0085aa50, 0085ab2d] [0085ab31, 0085ac6c]]


void FUN_0085aa20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d918;
  piVar1 = *(int **)(param_2 + 0x30);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if ((*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar2 + 8) * 4) + 300) == 0) &&
       (*(int *)(iVar2 + 0xc) != 0)) {
      FUN_0085c2b0();
    }
  }
  iVar2 = *(int *)(param_2 + 0x20);
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    FUN_0085ba40();
  }
  iVar2 = *(int *)(param_2 + 0x130);
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x40);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085bb60();
      }
      iVar2 = *(int *)(param_2 + 0x78);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085bc30();
      }
      iVar2 = *(int *)(param_2 + 0x94);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085bde0();
      }
      iVar2 = *(int *)(param_2 + 0xe8);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085bee0();
      }
      iVar2 = *(int *)(param_2 + 0x5c);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085bd10();
      }
      iVar2 = *(int *)(param_2 + 0xb0);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085c0f0();
      }
      iVar2 = *(int *)(param_2 + 0xcc);
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        FUN_0085c1d0();
      }
      ExceptionList = local_10;
      return;
    }
    iVar2 = *(int *)(iVar2 + 8);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00408ed0();
    local_8 = 0;
    FUN_00408ed0(local_34,0,0xffffffff);
    FUN_0085c350(param_1 + 0x130);
    local_8 = 0xffffffff;
    if (0xf < local_20) break;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

