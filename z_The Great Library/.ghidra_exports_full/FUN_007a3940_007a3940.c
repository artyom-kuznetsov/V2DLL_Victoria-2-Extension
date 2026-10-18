// FUN_007a3940 @ 007a3940 body=[[007a3940, 007a39ef] [007a39f3, 007a3a4a] [007a3a4e, 007a3a87] [007a3a8b, 007a3aad]]


void FUN_007a3940(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b435ac;
  local_10 = ExceptionList;
  puVar1 = in_ECX + 0xd;
  ExceptionList = &local_10;
  *in_ECX = CGameList::vftable;
  *puVar1 = CGameList::vftable;
  local_8 = 3;
  (**(code **)(*(int *)in_ECX[0xe] + 8))(puVar1);
  (**(code **)(*(int *)in_ECX[0x40] + 0x50))();
  (**(code **)(*(int *)in_ECX[0xe] + 0x5c))();
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("RefreshButton",0xd);
  local_8._0_1_ = 4;
  iVar2 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 8))(in_ECX + 0x16);
  local_8._0_1_ = 3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("JoinButton",10);
  local_8._0_1_ = 5;
  iVar2 = (**(code **)(*(int *)in_ECX[0x13] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 8))(in_ECX + 0x2a);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  (**(code **)(*(int *)in_ECX[0x13] + 0x50))();
  in_ECX[0x2a] = CButtonObserver::vftable;
  in_ECX[0x16] = CButtonObserver::vftable;
  *puVar1 = CChoiceObserver<CStandardlistboxItem>::vftable;
  *in_ECX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  ExceptionList = local_10;
  return;
}

