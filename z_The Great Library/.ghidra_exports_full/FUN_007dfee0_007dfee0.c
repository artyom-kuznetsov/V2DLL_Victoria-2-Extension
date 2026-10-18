// FUN_007dfee0 @ 007dfee0 body=[[007dfee0, 007e0286] [007e028a, 007e02aa] [007e02ae, 007e02d9] [007e02dd, 007e039f]]


void FUN_007dfee0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  undefined4 local_d0;
  undefined4 uStack_cc;
  float local_c8;
  int local_c0;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined1 auStack_9c [12];
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7a0ee;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_c0 = in_ECX;
  if (*(char *)(in_ECX + 0x26b8) == '\0') {
    ExceptionList = &local_14;
    FUN_007df9e0();
  }
  if ((DAT_013f2dc4 & 1) == 0) {
    DAT_013f2dc4 = DAT_013f2dc4 | 1;
    DAT_013f2db8 = DAT_00f1f768;
    DAT_013f2dbc = DAT_00f1f768;
    DAT_013f2dc0 = 0.0;
  }
  if ((DAT_013f2dc4 & 2) == 0) {
    DAT_013f2dc4 = DAT_013f2dc4 | 2;
    DAT_013f2db0 = DAT_00f095b4;
    DAT_013f2db4 = 16.0;
  }
  local_c8 = DAT_013f2dc0 + 0.0;
  local_68 = CONCAT44((float)param_3 + DAT_013f2dbc,(float)param_2 + DAT_013f2db8);
  local_54 = CONCAT44(((float)param_3 - DAT_013f2db4) + DAT_013f2dbc,(float)param_2 + DAT_013f2db8);
  local_5c = DAT_00f17834;
  local_58 = DAT_00f17838;
  local_48 = DAT_00f17834;
  local_44 = DAT_00f17840;
  local_40 = CONCAT44(((float)param_3 - DAT_013f2db4) + DAT_013f2dbc,
                      (float)param_2 + DAT_013f2db0 + DAT_013f2db8);
  local_2c = CONCAT44((float)param_3 + DAT_013f2dbc,(float)param_2 + DAT_013f2db0 + DAT_013f2db8);
  local_34 = DAT_00f1783c;
  local_30 = DAT_00f17840;
  local_d0 = DAT_00f1783c;
  uStack_cc = DAT_00f17838;
  local_20 = DAT_00f1783c;
  local_1c = DAT_00f17838;
  piVar2 = *(int **)(*(int *)(in_ECX + 0x26b0) + 100);
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_60 = local_c8;
  local_4c = local_c8;
  local_38 = local_c8;
  local_24 = local_c8;
  FUN_00409350(param_1,(int)pcVar4 - (int)(param_1 + 1));
  local_c = 0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  FUN_00409350("GFX_counter_",0xc);
  local_c._0_1_ = 1;
  uVar5 = FUN_00988f20(&local_a0);
  local_c = CONCAT31(local_c._1_3_,2);
  iVar6 = FUN_005c2ad0(uVar5);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84);
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc);
  }
  local_c = 0xffffffff;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = local_bc & 0xffffff00;
  if (local_8c < 0x10) {
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (iVar6 != 0) {
      uVar3 = *(uint *)(iVar6 + 0x16c);
      if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + *(int *)(local_c0 + 0x2c));
      }
      (**(code **)(*piVar2 + 0x104))(piVar2,0,uVar5);
      local_d0 = 0;
      (**(code **)(*piVar2 + 0x110))(piVar2,0,6,&local_d0);
      piVar7 = piVar2;
      (**(code **)(*piVar2 + 0x114))(piVar2,0,6,2);
      (**(code **)(*piVar2 + 0x164))(piVar2,0x102);
      (**(code **)(*piVar2 + 0x14c))(piVar2,6,2,auStack_9c,0x14);
      (**(code **)(*piVar2 + 0x114))(piVar2,0,6,piVar7);
    }
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_a0);
}

