// FUN_0099d3d0 @ 0099d3d0 body=[[0099d3d0, 0099d637] [0099d63b, 0099d6a2] [0099d6a6, 0099d6e6] [0099d6ea, 0099d7b2] [0099d7b6, 0099d7dd] [0099d7e1, 0099d7fa] [0099d7fe, 0099d818] [0099d81c, 0099d845] [0099d849, 0099d86e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0099d3d0(undefined *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined1 local_22c [84];
  uint local_1d8 [68];
  char local_c8 [32];
  uint local_a8;
  undefined4 local_98;
  uint local_94;
  char local_8c [4];
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4f70a;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  if ((DAT_013f2888 & 1) == 0) {
    DAT_013f2888 = DAT_013f2888 | 1;
    local_8 = 0;
    _DAT_013f27bc = 0xf;
    _DAT_013f27b8 = 0;
    DAT_013f27a8 = 0;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    _DAT_013f27d8 = 0xf;
    _DAT_013f27d4 = 0;
    DAT_013f27c4 = 0;
    FUN_00409350("Surface        ",0xf);
    local_8._0_1_ = 2;
    _DAT_013f27f4 = 0xf;
    _DAT_013f27f0 = 0;
    DAT_013f27e0 = 0;
    FUN_00409350("Volume         ",0xf);
    local_8._0_1_ = 3;
    _DAT_013f2810 = 0xf;
    _DAT_013f280c = 0;
    DAT_013f27fc = 0;
    FUN_00409350("Texture        ",0xf);
    local_8._0_1_ = 4;
    _DAT_013f282c = 0xf;
    _DAT_013f2828 = 0;
    DAT_013f2818 = 0;
    FUN_00409350("VolumeTexture  ",0xf);
    local_8._0_1_ = 5;
    _DAT_013f2848 = 0xf;
    _DAT_013f2844 = 0;
    DAT_013f2834 = 0;
    FUN_00409350("CubeTexture    ",0xf);
    local_8._0_1_ = 6;
    _DAT_013f2864 = 0xf;
    _DAT_013f2860 = 0;
    DAT_013f2850 = 0;
    FUN_00409350("VertexBuffer   ",0xf);
    local_8 = CONCAT31(local_8._1_3_,7);
    _DAT_013f2880 = 0xf;
    _DAT_013f287c = 0;
    DAT_013f286c = 0;
    FUN_00409350("IndexBuffer    ",0xf);
    _atexit((_func_4879 *)&LAB_00c86510);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_8._0_1_ = 8;
  local_8._1_3_ = 0;
  iVar2 = (**(code **)(**(int **)((int)param_1 + 100) + 0x1d8))
                    (*(int **)((int)param_1 + 100),5,&local_34);
  if (iVar2 == 0) {
    (**(code **)(*local_34 + 0x18))(local_34,1);
    do {
      iVar2 = (**(code **)(*local_34 + 0x1c))(local_34,local_22c,0x160,1);
    } while (iVar2 == 1);
    (**(code **)(*local_34 + 8))(local_34);
    FUN_00448740("\n\t[Video Memory usage]\n",0x17);
    local_14 = 0;
    puVar6 = local_1d8;
    param_1 = &DAT_013f27c4;
    do {
      local_14 = local_14 + (*puVar6 >> 10);
      FUN_00448740(&DAT_00e37c08,1);
      FUN_00448aa0(param_1,0,0xffffffff);
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350(&DAT_00df9638,2);
      local_8._0_1_ = 9;
      FUN_00448aa0(local_30,0,0xffffffff);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      local_8._0_1_ = 10;
      pcVar3 = __itoa(*puVar6 >> 10,local_8c,10);
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_8._0_1_ = 0xb;
      FUN_00448aa0(local_30,0,0xffffffff);
      local_8._0_1_ = 8;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350(&DAT_00e38258,4);
      local_8._0_1_ = 0xc;
      FUN_00448aa0(local_30,0,0xffffffff);
      local_8._0_1_ = 8;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      param_1 = param_1 + 0x1c;
      puVar6 = puVar6 + 0xb;
    } while ((int)param_1 < 0x13f2888);
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350(&DAT_00e38258,4);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8._0_1_ = 0xe;
    pcVar3 = __itoa(local_14,local_c8,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 0xf;
    FUN_00988fa0(local_30);
    local_8._0_1_ = 0x10;
    uVar4 = FUN_00988f20(local_6c);
    local_8._0_1_ = 0x11;
    FUN_00448aa0(uVar4,0,0xffffffff);
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8._0_1_ = 8;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
  }
  else {
    FUN_00409350("\n\tNeed to select debug runtime to be able to see used memory.\n",0x3e);
  }
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  FUN_00408ed0(local_50,0,0xffffffff);
  if (local_3c < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

