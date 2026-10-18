// FUN_00843a10 @ 00843a10  (requested 00843A10, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 FUN_00843a10(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  bool bVar4;
  bool bVar5;
  undefined4 local_5c [5];
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bafe18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_00911760(0);
  if (cVar1 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  uVar3 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  local_24 = *(undefined4 *)(in_ECX + 8);
  local_1c = 0;
  local_18[0] = 0;
  iVar2 = FUN_00425a40();
  local_20 = CONCAT31(local_20._1_3_,*(int *)(iVar2 + 4) == *(int *)(in_ECX + 0xc));
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  FUN_00838eb0(uVar3,&local_1c,local_18,local_40,1,in_ECX + 0x28,local_20,param_2,param_3);
  if ((char)local_20 == '\0') {
    uVar3 = FUN_0054a540(local_5c,local_18);
    local_8._0_1_ = 2;
  }
  else {
    uVar3 = FUN_0054a540(local_5c,&local_1c);
    local_8._0_1_ = 1;
  }
  FUN_00448aa0(uVar3,0,0xffffffff);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  if (param_1 != 0) {
    FUN_00448aa0(local_40,0,0xffffffff);
  }
  if ((char)local_20 == '\0') {
    if (local_18[0] < 0) goto LAB_00843b61;
    bVar5 = SBORROW4(local_18[0],local_1c);
    iVar2 = local_18[0] - local_1c;
    bVar4 = iVar2 == 0;
  }
  else {
    if (local_1c < 0) goto LAB_00843b61;
    bVar5 = SBORROW4(local_1c,local_18[0]);
    iVar2 = local_1c - local_18[0];
    bVar4 = local_1c == local_18[0];
  }
  if (!bVar4 && bVar5 == iVar2 < 0) {
    FUN_00408ad0();
    ExceptionList = local_10;
    return 100;
  }
LAB_00843b61:
  if (local_2c < 0x10) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_40[0]);
}

