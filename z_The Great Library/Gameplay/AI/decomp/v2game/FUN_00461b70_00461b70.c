// FUN_00461b70 @ 00461b70 body=[[00461b70, 00461c9b] [00461c9f, 00461da1]]


undefined4 * FUN_00461b70(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_104;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined1 local_f4 [4];
  uint uStack_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined **appuStack_70 [19];
  void *pvStack_24;
  undefined1 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5ba52;
  local_14 = ExceptionList;
  puVar2 = *(uint **)(param_1 + 8);
  ExceptionList = &local_14;
  uVar4 = FUN_0045c080(puVar2[1],param_2);
  if ((uVar4 < *puVar2) || (puVar2[1] <= uVar4)) {
LAB_00461bea:
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = 0;
    FUN_00409350("news_database.cpp",0x11);
    local_c = 0;
    uVar5 = FUN_004015b0(local_f4,0x387,0x10004);
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987d50(uVar5,"CNewsDataBase::ReadMember - Unsupported type ",0x2d,0);
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    uVar5 = FUN_00418e30(uVar5,param_2);
    FUN_00401280(uVar5);
    uStack_1c = 0;
    FUN_00987ac0(appuStack_70);
    appuStack_70[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_70);
    if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_104);
    }
    ExceptionList = pvStack_24;
    return (undefined4 *)0x0;
  }
  iVar1 = (int)(uVar4 - *puVar2) / 0x1c;
  if (iVar1 == 0x15) goto LAB_00461bea;
  iVar1 = param_1 + 0xc + iVar1 * 0x10;
  if (iVar1 == 0) goto LAB_00461bea;
  local_f8 = (undefined4 *)FUN_00462500(param_3);
  if (local_f8 != *(undefined4 **)(iVar1 + 4)) {
    cVar3 = FUN_0098ab20();
    if (cVar3 == '\0') {
      ppuVar6 = &local_f8;
      goto LAB_00461ceb;
    }
  }
  local_fc = *(undefined4 **)(iVar1 + 4);
  ppuVar6 = &local_fc;
LAB_00461ceb:
  if ((*ppuVar6 == *(undefined4 **)(iVar1 + 4)) ||
     (puVar8 = (undefined4 *)(*ppuVar6)[10], puVar8 == (undefined4 *)0x0)) {
    puVar7 = (undefined4 *)FUN_00aae9af(0x44);
    local_c = 2;
    puVar8 = (undefined4 *)0x0;
    local_fc = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      uVar5 = FUN_00467310();
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      local_c = CONCAT31(local_c._1_3_,3);
      puVar7[9] = uVar5;
      puVar7[0xf] = 0xf;
      puVar7[0xe] = 0;
      *(undefined1 *)(puVar7 + 10) = 0;
      FUN_00408ed0(param_3,0,0xffffffff);
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar8 = puVar7;
    }
    local_c = 0xffffffff;
    puVar7 = (undefined4 *)FUN_00462160(param_3);
    *puVar7 = puVar8;
  }
  ExceptionList = local_14;
  return puVar8;
}

