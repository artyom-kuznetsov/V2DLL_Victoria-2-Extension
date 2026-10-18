// FUN_005f8d40 @ 005f8d40 body=[[005f8d40, 005f8e07] [005f8e0b, 005f8e8c] [005f8e90, 005f8f31] [005f8f35, 005f9017] [005f901b, 005f9090] [005f9094, 005f90b3] [005f90b7, 005f90cb]]


undefined4 * FUN_005f8d40(undefined4 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *in_ECX;
  int *in_EDX;
  longlong lVar8;
  char local_74 [4];
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bae931;
  local_10 = ExceptionList;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_8 = 0;
  uVar3 = (**(code **)(*in_EDX + 0x3c))();
  piVar4 = (int *)(**(code **)(*in_EDX + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(local_54,uVar3);
  param_1[8] = uVar3;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  param_1[10] = in_EDX;
  *param_1 = _anon_8FAA153F::CBackEndCountryItem::vftable;
  param_1[7] = _anon_8FAA153F::CBackEndCountryItem::vftable;
  param_1[0xb] = param_2;
  FUN_005fcd50(&LAB_005f90d0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8._0_1_ = 8;
  piVar4 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_38);
  local_8._0_1_ = 7;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  piVar5 = (int *)(**(code **)(*piVar4 + 0xec))();
  local_18 = (undefined4 *)(*piVar5 + 0x150);
  uVar3 = FUN_0052fc10();
  (*(code *)*local_18)(uVar3);
  (**(code **)(*piVar4 + 0xd4))(*(undefined4 *)(param_2 + 0x20));
  (**(code **)(piVar4[0x15] + 4))(param_1 + 0xc);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("score",5);
  local_8._0_1_ = 9;
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_38);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  uVar6 = *(int *)(*(int *)(param_2 + 0xbcc) + 0x28c) + *(int *)(param_2 + 0xea0);
  local_18 = *(undefined4 **)(param_2 + 0x1a4);
  local_24 = 0xf;
  uVar3 = *(undefined4 *)(param_2 + 0x1a0);
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  lVar8 = __alldiv(uVar6 * 0x40000000,
                   (((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11) << 0xf | (uVar6 & 0x1ffff) >> 2,
                   0x1f40000,0);
  lVar8 = lVar8 + CONCAT44(local_18,uVar3);
  uVar6 = (uint)lVar8;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_8._0_1_ = 10;
  pcVar7 = __itoa(uVar6 + *(uint *)(param_2 + 0x198) >> 0xf |
                  ((int)((ulonglong)lVar8 >> 0x20) + *(int *)(param_2 + 0x19c) +
                  (uint)CARRY4(uVar6,*(uint *)(param_2 + 0x198))) * 0x20000,local_74,10);
  pcVar2 = pcVar7;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar7,(int)pcVar2 - (int)(pcVar7 + 1));
  local_8._0_1_ = 0xb;
  FUN_00408ed0(local_54,0,0xffffffff);
  FUN_00a5ecc0(local_54,0);
  local_8._0_1_ = 7;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("country_name",0xc);
  local_8._0_1_ = 0xc;
  uVar3 = FUN_004f97a0();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  (**(code **)(*(int *)param_1[8] + 0x3c))(local_38);
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

