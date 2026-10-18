// FUN_00a32750 @ 00a32750 body=[[00a32750, 00a328c8]]


undefined4 FUN_00a32750(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  int *piVar3;
  int iVar4;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28;
  undefined **local_24 [3];
  char *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4e498;
  local_10 = ExceptionList;
  local_14 = *(undefined4 *)(param_1 + 0xe0);
  local_8 = 1;
  local_40 = (int *)0x0;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_00aae9af(8);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    *piVar3 = 0;
    *piVar3 = (int)&local_40;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_8 = 2;
    local_40 = piVar3;
    FUN_00a365d0((int *)(param_1 + 200));
    local_8 = 0xffffffff;
    FUN_00a328d0();
    FUN_00408ed0(param_2,0,0xffffffff);
    iVar2 = *(int *)(param_1 + 200);
    iVar4 = ((*(int *)(param_1 + 0xcc) - iVar2) / 0x54) * 0x54;
    _Dst = *(void **)(iVar4 + -0x34 + iVar2);
    puVar1 = (undefined4 *)(iVar4 + -0x34 + iVar2);
    if (_Dst != (void *)puVar1[1]) {
      FID_conflict__memcpy(_Dst,(void *)puVar1[1],0);
      puVar1[1] = _Dst;
    }
    FUN_00a36f30(*puVar1,param_3,param_1);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    ExceptionList = local_10;
    return local_14;
  }
  local_18 = (char *)0x0;
  std::exception::exception((exception *)local_24,&local_18);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

