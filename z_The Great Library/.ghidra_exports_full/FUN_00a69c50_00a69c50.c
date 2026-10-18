// FUN_00a69c50 @ 00a69c50 body=[[00a69c50, 00a69d54] [00a69d58, 00a69da9] [00a69dae, 00a69e0b] [00a69e15, 00a69e38]]


void FUN_00a69c50(void)

{
  int *piVar1;
  int *piVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *_Dst;
  int in_ECX;
  undefined4 extraout_ECX;
  size_t _Size;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(in_ECX + 0x84) != 0) {
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    ExceptionList = &pvStack_14;
    FUN_00409350("server.cpp",10);
    local_c = 0;
    uVar3 = FUN_004015b0(local_f4,0xacd,0x301);
    local_c._0_1_ = 1;
    uVar4 = *(undefined4 *)(in_ECX + 0x84);
    FUN_00987d50(uVar3,"Sending ",8,0);
    uVar4 = FUN_00455470(uVar3,uVar4,extraout_ECX," commands");
    uVar4 = FUN_00418e30(uVar4);
    FUN_00401280(uVar4);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00987ac0(appuStack_60);
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_60);
    local_c = 0xffffffff;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
  }
  local_c = 0xffffffff;
  if (*(int *)(in_ECX + 0x84) != 0) {
    for (piVar1 = *(int **)(in_ECX + 0x7c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar2 = (int *)*piVar1;
      _Src = (void *)*piVar2;
      _Size = piVar2[1] - *piVar2;
      puVar5 = (undefined4 *)(*(code *)PTR__malloc_00f071f8)(0x10);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _abort();
      }
      _Dst = (void *)(*(code *)PTR__malloc_00f071f8)(_Size);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _abort();
      }
      puVar5[2] = _Dst;
      if (_Src != (void *)0x0) {
        FID_conflict__memcpy(_Dst,_Src,_Size);
      }
      *puVar5 = 0;
      puVar5[1] = 1;
      puVar5[3] = _Size;
      FUN_00a8ac70(*(undefined4 *)(in_ECX + 0x18),0,puVar5);
    }
  }
  FUN_00a6ae00();
  if (*(int *)(in_ECX + 0x7c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x7c));
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  ExceptionList = pvStack_14;
  return;
}

