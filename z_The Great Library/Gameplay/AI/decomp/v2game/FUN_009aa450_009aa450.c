// FUN_009aa450 @ 009aa450 body=[[009aa450, 009aa4e4] [009aa4e8, 009aa54c] [009aa550, 009aa5a6] [009aa5aa, 009aa645] [009aa649, 009aa698]]


undefined1 * FUN_009aa450(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  int in_ECX;
  undefined4 *puVar7;
  int local_d0;
  undefined **local_cc [4];
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint *local_94;
  undefined4 local_90;
  uint local_8c;
  undefined **local_80 [18];
  undefined ***local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b527ba;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  FUN_00987ea0(&local_d0,2,1);
  local_8._1_3_ = 0;
  for (puVar7 = *(undefined4 **)(in_ECX + 4);
      (local_8._0_1_ = 1, *(undefined4 **)(in_ECX + 4) <= puVar7 &&
      (puVar7 < *(undefined4 **)(in_ECX + 8))); puVar7 = puVar7 + 1) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)*puVar7 + 8))(local_34,param_2,param_3);
    local_8._0_1_ = 2;
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    FUN_00418e30(&local_d0,puVar4);
    local_8._0_1_ = 1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  pcVar5 = (char *)FUN_00988010();
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < *(uint *)(pcVar5 + 0x14)) {
    pcVar5 = *(char **)pcVar5;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  pcVar6 = pcVar5;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar5,(int)pcVar6 - (int)(pcVar5 + 1));
  local_18 = 1;
  if (local_20 < 0x10) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    *(undefined ***)((int)local_cc + *(int *)(local_d0 + 4) + -4) = &PTR_FUN_00e37850;
    local_8 = 4;
    local_38 = local_cc;
    local_cc[0] = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    if ((local_8c & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*local_bc);
    }
    *local_bc = 0;
    *local_ac = 0;
    *local_9c = 0;
    *local_b8 = 0;
    *local_a8 = 0;
    *local_98 = 0;
    local_8c = local_8c & 0xfffffffe;
    local_90 = 0;
    local_cc[0] = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
    local_8 = 5;
    if (local_94 == (uint *)0x0) {
      local_8._0_1_ = 4;
      local_8._1_3_ = 0;
      FUN_00aada22();
      local_8 = (uint)local_8._1_3_ << 8;
      *(undefined ***)((int)local_cc + *(int *)(local_d0 + 4) + -4) =
           std::basic_ostream<char,std::char_traits<char>_>::vftable;
      local_80[0] = std::ios_base::vftable;
      FUN_00aad52d(local_80);
      ExceptionList = local_10;
      return param_1;
    }
    uVar2 = *local_94;
    if (uVar2 != 0) {
      std::_Lockit::_Lockit((_Lockit *)&param_3,0);
      iVar3 = *(int *)(uVar2 + 4);
      if ((iVar3 != 0) && (iVar3 != -1)) {
        *(int *)(uVar2 + 4) = iVar3 + -1;
      }
      iVar3 = *(int *)(uVar2 + 4);
      FUN_00aad9f1();
      puVar7 = (undefined4 *)(~-(uint)(iVar3 != 0) & uVar2);
      if (puVar7 != (undefined4 *)0x0) {
        (**(code **)*puVar7)(1);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_94);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

