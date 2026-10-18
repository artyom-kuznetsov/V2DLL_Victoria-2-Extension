// FUN_006c72a0 @ 006c72a0 body=[[006c72a0, 006c76c8]]


/* WARNING: Type propagation algorithm not settling */

int * FUN_006c72a0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  char local_164;
  undefined1 local_114 [28];
  undefined1 local_f8 [36];
  undefined1 local_d4 [28];
  undefined1 local_b8 [28];
  undefined1 local_9c [28];
  undefined1 local_80 [28];
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  char *local_4c [4];
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b448bd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006cb010();
  local_8 = 0;
  for (local_60 = 0; local_60 < 0xe; local_60 = local_60 + 1) {
    *(undefined1 *)((int)in_ECX + local_60 + 8) = 1;
  }
  piVar2 = (int *)FUN_0040a7f0();
  local_54 = (int *)(**(code **)(*piVar2 + 0x34))();
  piVar2 = (int *)FUN_0040a7f0();
  local_5c = (**(code **)(*piVar2 + 0x3c))();
  piVar2 = (int *)FUN_0040a7f0();
  local_50 = (**(code **)(*piVar2 + 0x40))();
  FUN_009885d0();
  local_8._0_1_ = 1;
  iVar3 = (**(code **)(*local_54 + 0x2c))(local_80);
  *in_ECX = iVar3;
  local_8._0_1_ = 0;
  FUN_00408ad0();
  (**(code **)(*(int *)(*in_ECX + 0x18) + 0x38))();
  FUN_009885d0();
  local_8._0_1_ = 2;
  iVar3 = (**(code **)(*local_54 + 0x7c))(local_9c,local_5c);
  in_ECX[0xc] = iVar3;
  local_8._0_1_ = 0;
  FUN_00408ad0();
  FUN_009885d0();
  local_8._0_1_ = 3;
  (**(code **)(*(int *)*in_ECX + 0x58))(local_b8,in_ECX[0xc]);
  local_8._0_1_ = 0;
  FUN_00408ad0();
  FUN_009885d0();
  local_8._0_1_ = 4;
  iVar3 = (**(code **)(*(int *)*in_ECX + 0x7c))(local_d4);
  in_ECX[1] = iVar3;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408ad0();
  iVar3 = FUN_0099bd30();
  in_ECX[0xd] = *(int *)(iVar3 + 4) / 2 + -0x30;
  local_4c[0] = (char *)0x0;
  _memset(local_4c + 1,0,0x34);
  local_4c[0] = "outliner_view_rebel_occupations";
  local_4c[3] = "outliner_view_combat";
  local_3c = "outliner_view_navalcombat";
  local_38 = "outliner_view_armies";
  local_34 = "outliner_view_navies";
  local_30 = "outliner_view_factories";
  local_2c = "outliner_view_buildings";
  local_28 = "outliner_view_army_construction";
  local_24 = "outliner_view_navy_construction";
  local_4c[1] = "outliner_view_sieges";
  local_4c[2] = "outliner_view_hostile_sieges";
  local_20 = "outliner_view_gp_influence";
  local_1c = "outliner_view_natfocus";
  local_18 = "outliner_view_rallypoints";
  local_58 = FUN_0068e0f0();
  local_11 = '\x01';
  for (local_64 = 0; local_64 < 0xe; local_64 = local_64 + 1) {
    if ((local_11 == '\0') || (local_4c[local_64] == (char *)0x0)) {
      local_164 = '\0';
    }
    else {
      local_164 = '\x01';
    }
    local_11 = local_164;
    cVar1 = FUN_0048fee0();
    if (cVar1 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 5;
      (**(code **)(*(int *)*in_ECX + 0x48))(local_f8);
      FUN_009a8bc0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00408ad0();
    }
  }
  FUN_009885d0();
  local_8._0_1_ = 6;
  (**(code **)(*(int *)(*in_ECX + 0x18) + 0x78))(local_114);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408ad0();
  ExceptionList = local_10;
  return in_ECX;
}

