// FUN_00a79f20 @ 00a79f20 body=[[00a79f20, 00a7a010] [00a7a014, 00a7a092]]


undefined4 * FUN_00a79f20(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  HMODULE pHVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d6d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a5f0c0(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e43890;
  param_1[6] = &PTR_LAB_00e438f0;
  param_1[0xc] = &PTR_LAB_00e43900;
  param_1[0x12] = &PTR_LAB_00e43910;
  param_1[0x18] = &PTR_LAB_00e43920;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x2a] = 100;
  param_1[0x29] = 5;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x96) = 0;
  if (DAT_013f0754 == 0) {
    iVar2 = FUN_00aae9af(1);
    iVar1 = DAT_013f0754;
    local_8 = CONCAT31(local_8._1_3_,1);
    if ((iVar2 != DAT_013f0754) && (DAT_013f0754 != 0)) {
      (**(code **)(*DAT_012586cc + 8))(DAT_012586cc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    uVar7 = 0;
    puVar6 = &DAT_012586cc;
    puVar5 = &DAT_00ddc314;
    uVar4 = 0x800;
    local_8 = (uint)local_8._1_3_ << 8;
    DAT_013f0754 = iVar2;
    pHVar3 = GetModuleHandleA((LPCSTR)0x0);
    DirectInput8Create(pHVar3,uVar4,puVar5,puVar6,uVar7);
  }
  puVar6 = param_1 + 0x31;
  (**(code **)(*DAT_012586cc + 0xc))(DAT_012586cc,&DAT_00ddc364,puVar6,0);
  (**(code **)(*(int *)*puVar6 + 0x2c))((int *)*puVar6,&DAT_00ddc574);
  (**(code **)(*(int *)*puVar6 + 0x34))((int *)*puVar6,param_2,5);
  (**(code **)(*(int *)*puVar6 + 0x1c))((int *)*puVar6);
  ExceptionList = local_10;
  return param_1;
}

