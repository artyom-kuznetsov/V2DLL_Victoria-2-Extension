// FUN_004d9ab0 @ 004d9ab0 body=[[004d9ab0, 004d9e0f] [004d9e13, 004da055] [004da05e, 004da173] [004da177, 004da1b4]]


void FUN_004d9ab0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint local_210;
  char *pcStack_20c;
  undefined4 uStack_208;
  int *piStack_204;
  undefined4 local_200;
  uint *local_1fc;
  char *pcStack_1f8;
  undefined ***pppuStack_1f4;
  uint local_1d4 [4];
  undefined4 local_1c4;
  uint local_1c0;
  uint local_1b8 [4];
  undefined4 local_1a8;
  uint local_1a4;
  undefined1 *local_19c;
  undefined **appuStack_120 [48];
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b93692;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_0125ce80 == 0) {
    pppuStack_1f4 = (undefined ***)0x3c;
    pcStack_1f8 = (char *)0x4d9ae5;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    local_c = 0;
    if (iVar3 == 0) {
      pppuStack_1f4 = (undefined ***)0x0;
    }
    else {
      pppuStack_1f4 = (undefined ***)0x4d9afe;
      pppuStack_1f4 = (undefined ***)FUN_004dada0();
    }
    local_c = 0xffffffff;
    pcStack_1f8 = (char *)0x4d9b13;
    FUN_004dc340();
  }
  puVar1 = (undefined4 *)param_1[0x3e];
joined_r0x004d9b2b:
  do {
    if (puVar1 == (undefined4 *)0x0) {
      pppuStack_1f4 = (undefined ***)(param_1 + 0x3e);
      pcStack_1f8 = (char *)0x4d9e2c;
      FUN_004dc4d0();
      puVar1 = (undefined4 *)param_1[0x46];
      while( true ) {
        while( true ) {
          while( true ) {
            if (puVar1 == (undefined4 *)0x0) {
              pcStack_1f8 = (char *)0x4da19b;
              pppuStack_1f4 = (undefined ***)(param_1 + 0x46);
              FUN_004dc4d0();
              ExceptionList = local_14;
              return;
            }
            piVar7 = (int *)*puVar1;
            puVar1 = (undefined4 *)puVar1[2];
            pcStack_1f8 = (char *)0x4d9e5e;
            pppuStack_1f4 = (undefined ***)piVar7;
            puVar4 = (undefined4 *)FUN_004dc420();
            if ((puVar4 == (undefined4 *)0x0) &&
               (puVar4 = DAT_01258730, DAT_01258730 == (undefined4 *)0x0)) {
              pppuStack_1f4 = (undefined ***)0x140;
              pcStack_1f8 = (char *)0x4d9e76;
              puVar4 = (undefined4 *)FUN_00aae9af();
              local_c = 6;
              if (puVar4 == (undefined4 *)0x0) {
                puVar4 = (undefined4 *)0x0;
              }
              else {
                pppuStack_1f4 = (undefined ***)0x0;
                local_19c = (undefined1 *)&local_210;
                local_1fc = (uint *)0xf;
                local_200 = 0;
                local_210 = local_210 & 0xffffff00;
                FUN_00409350("nobuilding",10);
                FUN_004d8b60(puVar4);
                *puVar4 = CNullBuilding::vftable;
              }
              local_c = 0xffffffff;
              DAT_01258730 = puVar4;
            }
            if (puVar4 != (undefined4 *)0x0) break;
            pppuStack_1f4 = (undefined ***)0xc;
            pcStack_1f8 = "building.cpp";
            local_1c0 = 0xf;
            local_1c4 = 0;
            local_1d4[0] = local_1d4[0] & 0xffffff00;
            local_1fc = (uint *)0x4d9f5f;
            FUN_00409350();
            pppuStack_1f4 = (undefined ***)0x10004;
            local_1fc = local_1d4;
            pcStack_1f8 = (char *)0x124;
            local_c = 7;
            local_200 = 0x4d9f82;
            uVar6 = FUN_004015b0();
            pppuStack_1f4 = (undefined ***)0x0;
            pcStack_1f8 = (char *)0x12;
            local_1fc = (uint *)0xdfd990;
            local_c = CONCAT31(local_c._1_3_,8);
            piStack_204 = (int *)0x4d9f9d;
            local_200 = uVar6;
            FUN_00987d50();
            if (0xf < (uint)piVar7[5]) {
              piVar7 = (int *)*piVar7;
            }
            pcStack_20c = (char *)0x4d9fac;
            uStack_208 = uVar6;
            piStack_204 = piVar7;
            local_210 = FUN_00418e30();
            pcStack_20c = "\' referred to in not-if list.";
            piVar7 = (int *)FUN_00418e30();
            uStack_208 = 0x4d9fc2;
            piStack_204 = piVar7;
            FUN_00408be0();
            uVar8 = 0;
            if ((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) {
              pppuStack_1f4 = (undefined ***)0x4d9fdd;
              iVar3 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))()
              ;
              if (iVar3 == -1) {
                uVar8 = 4;
              }
            }
            if (uVar8 != 0) {
              pcStack_1f8 = (char *)(*(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar8);
              if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
                pcStack_1f8 = (char *)((uint)pcStack_1f8 | 4);
              }
              pppuStack_1f4 = (undefined ***)0x0;
              local_1fc = (uint *)0x4da006;
              FUN_00401120();
            }
            pppuStack_1f4 = appuStack_120;
            local_c = CONCAT31(local_c._1_3_,7);
            pcStack_1f8 = (char *)0x4da01b;
            FUN_00987ac0();
            pppuStack_1f4 = appuStack_120;
            appuStack_120[0] = std::ios_base::vftable;
            pcStack_1f8 = (char *)0x4da033;
            FUN_00aad52d();
            local_c = 0xffffffff;
            if (0xf < local_1c0) {
              pppuStack_1f4 = (undefined ***)local_1d4[0];
                    /* WARNING: Subroutine does not return */
              pcStack_1f8 = &UNK_004da056;
              FUN_00aae91b();
            }
          }
          if (puVar4 == param_1) break;
          iVar3 = param_1[0x43];
          pppuStack_1f4 = (undefined ***)0x10;
          pcStack_1f8 = (char *)0x4d9ef9;
          puVar5 = (undefined4 *)FUN_00aae9af();
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            *puVar5 = puVar4;
            puVar5[1] = iVar3;
            puVar5[2] = 0;
            *(undefined1 *)(puVar5 + 3) = 0;
          }
          iVar2 = param_1[0x44];
          param_1[0x43] = puVar5;
          param_1[0x44] = iVar2 + 1;
          if (iVar2 == 0) {
            param_1[0x42] = puVar5;
          }
          else {
            *(undefined4 **)(iVar3 + 8) = puVar5;
          }
        }
        pppuStack_1f4 = (undefined ***)0xc;
        pcStack_1f8 = "building.cpp";
        local_1a4 = 0xf;
        local_1a8 = 0;
        local_1b8[0] = local_1b8[0] & 0xffffff00;
        local_1fc = (uint *)0x4da07e;
        FUN_00409350();
        pppuStack_1f4 = (undefined ***)0x10004;
        local_1fc = local_1b8;
        pcStack_1f8 = (char *)0x126;
        local_c = 9;
        local_200 = 0x4da0a4;
        uVar6 = FUN_004015b0();
        pppuStack_1f4 = (undefined ***)0x0;
        pcStack_1f8 = (char *)0xa;
        local_1fc = (uint *)0xdfd9c8;
        local_c = CONCAT31(local_c._1_3_,10);
        piStack_204 = (int *)0x4da0bf;
        local_200 = uVar6;
        FUN_00987d50();
        if (0xf < (uint)piVar7[5]) {
          piVar7 = (int *)*piVar7;
        }
        pcStack_20c = (char *)0x4da0ce;
        uStack_208 = uVar6;
        piStack_204 = piVar7;
        local_210 = FUN_00418e30();
        pcStack_20c = "\' defined as its own not-if.";
        piVar7 = (int *)FUN_00418e30();
        uStack_208 = 0x4da0e4;
        piStack_204 = piVar7;
        FUN_00408be0();
        uVar8 = 0;
        if ((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) {
          pppuStack_1f4 = (undefined ***)0x4da0ff;
          iVar3 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))();
          if (iVar3 == -1) {
            uVar8 = 4;
          }
        }
        if (uVar8 != 0) {
          pcStack_1f8 = (char *)(*(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar8);
          if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
            pcStack_1f8 = (char *)((uint)pcStack_1f8 | 4);
          }
          pppuStack_1f4 = (undefined ***)0x0;
          local_1fc = (uint *)0x4da128;
          FUN_00401120();
        }
        pppuStack_1f4 = appuStack_60;
        local_c = CONCAT31(local_c._1_3_,9);
        pcStack_1f8 = (char *)0x4da13d;
        FUN_00987ac0();
        pppuStack_1f4 = appuStack_60;
        appuStack_60[0] = std::ios_base::vftable;
        pcStack_1f8 = (char *)0x4da155;
        FUN_00aad52d();
        local_c = 0xffffffff;
        if (0xf < local_1a4) break;
        local_1a4 = 0xf;
        local_1a8 = 0;
        local_1b8[0] = local_1b8[0] & 0xffffff00;
      }
      pppuStack_1f4 = (undefined ***)local_1b8[0];
                    /* WARNING: Subroutine does not return */
      pcStack_1f8 = &UNK_004da174;
      FUN_00aae91b();
    }
    piVar7 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    pcStack_1f8 = (char *)0x4d9b48;
    pppuStack_1f4 = (undefined ***)piVar7;
    puVar4 = (undefined4 *)FUN_004dc420();
    if ((puVar4 == (undefined4 *)0x0) && (puVar4 = DAT_01258730, DAT_01258730 == (undefined4 *)0x0))
    {
      pppuStack_1f4 = (undefined ***)0x140;
      pcStack_1f8 = (char *)0x4d9b60;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_c = 1;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        pppuStack_1f4 = (undefined ***)0x0;
        local_1fc = (uint *)0xf;
        local_200 = 0;
        local_210 = local_210 & 0xffffff00;
        FUN_00409350("nobuilding",10);
        FUN_004d8b60(puVar4);
        *puVar4 = CNullBuilding::vftable;
      }
      local_c = 0xffffffff;
      DAT_01258730 = puVar4;
    }
    if (puVar4 == (undefined4 *)0x0) {
      pppuStack_1f4 = (undefined ***)0xc;
      pcStack_1f8 = "building.cpp";
      local_1c0 = 0xf;
      local_1c4 = 0;
      local_1d4[0] = (uint)local_1d4[0]._1_3_ << 8;
      local_1fc = (uint *)0x4d9c49;
      FUN_00409350();
      pppuStack_1f4 = (undefined ***)0x10004;
      local_1fc = local_1d4;
      pcStack_1f8 = (char *)0x10d;
      local_c = 2;
      local_200 = 0x4d9c6c;
      uVar6 = FUN_004015b0();
      pppuStack_1f4 = (undefined ***)0x0;
      pcStack_1f8 = (char *)0x12;
      local_1fc = (uint *)0xdfd990;
      local_c = CONCAT31(local_c._1_3_,3);
      piStack_204 = (int *)0x4d9c87;
      local_200 = uVar6;
      FUN_00987d50();
      if (0xf < (uint)piVar7[5]) {
        piVar7 = (int *)*piVar7;
      }
      pcStack_20c = (char *)0x4d9c96;
      uStack_208 = uVar6;
      piStack_204 = piVar7;
      local_210 = FUN_00418e30();
      pcStack_20c = "\' referred to in prerequisited list.";
      piVar7 = (int *)FUN_00418e30();
      uStack_208 = 0x4d9cac;
      piStack_204 = piVar7;
      FUN_00408be0();
      uVar8 = 0;
      if ((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) {
        pppuStack_1f4 = (undefined ***)0x4d9cc7;
        iVar3 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))();
        if (iVar3 == -1) {
          uVar8 = 4;
        }
      }
      if (uVar8 != 0) {
        pcStack_1f8 = (char *)(*(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar8);
        if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
          pcStack_1f8 = (char *)((uint)pcStack_1f8 | 4);
        }
        pppuStack_1f4 = (undefined ***)0x0;
        local_1fc = (uint *)0x4d9cf0;
        FUN_00401120();
      }
      local_c = CONCAT31(local_c._1_3_,2);
    }
    else {
      if (puVar4 != param_1) {
        iVar3 = param_1[0x3b];
        pppuStack_1f4 = (undefined ***)0x10;
        pcStack_1f8 = (char *)0x4d9be3;
        puVar5 = (undefined4 *)FUN_00aae9af();
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = puVar4;
          puVar5[1] = iVar3;
          puVar5[2] = 0;
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        iVar2 = param_1[0x3c];
        param_1[0x3b] = puVar5;
        param_1[0x3c] = iVar2 + 1;
        if (iVar2 == 0) {
          param_1[0x3a] = puVar5;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar5;
        }
        goto joined_r0x004d9b2b;
      }
      pppuStack_1f4 = (undefined ***)0xc;
      pcStack_1f8 = "building.cpp";
      local_1c0 = 0xf;
      local_1c4 = 0;
      local_1d4[0] = (uint)local_1d4[0]._1_3_ << 8;
      local_1fc = (uint *)0x4d9d1d;
      FUN_00409350();
      pppuStack_1f4 = (undefined ***)0x10004;
      local_1fc = local_1d4;
      pcStack_1f8 = (char *)0x10f;
      local_c = 4;
      local_200 = 0x4d9d40;
      uVar6 = FUN_004015b0();
      pppuStack_1f4 = (undefined ***)0x0;
      pcStack_1f8 = (char *)0xa;
      local_1fc = (uint *)0xdfd9c8;
      local_c = CONCAT31(local_c._1_3_,5);
      piStack_204 = (int *)0x4d9d5b;
      local_200 = uVar6;
      FUN_00987d50();
      if (0xf < (uint)piVar7[5]) {
        piVar7 = (int *)*piVar7;
      }
      pcStack_20c = (char *)0x4d9d6a;
      uStack_208 = uVar6;
      piStack_204 = piVar7;
      local_210 = FUN_00418e30();
      pcStack_20c = "\' defined as its own prerequisit.";
      piVar7 = (int *)FUN_00418e30();
      uStack_208 = 0x4d9d80;
      piStack_204 = piVar7;
      FUN_00408be0();
      uVar8 = 0;
      if ((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) {
        pppuStack_1f4 = (undefined ***)0x4d9d9b;
        iVar3 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))();
        if (iVar3 == -1) {
          uVar8 = 4;
        }
      }
      if (uVar8 != 0) {
        pcStack_1f8 = (char *)(*(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar8);
        if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
          pcStack_1f8 = (char *)((uint)pcStack_1f8 | 4);
        }
        pppuStack_1f4 = (undefined ***)0x0;
        local_1fc = (uint *)0x4d9dc4;
        FUN_00401120();
      }
      local_c = CONCAT31(local_c._1_3_,4);
    }
    pppuStack_1f4 = appuStack_120;
    pcStack_1f8 = (char *)0x4d9dd9;
    FUN_00987ac0();
    pppuStack_1f4 = appuStack_120;
    appuStack_120[0] = std::ios_base::vftable;
    pcStack_1f8 = (char *)0x4d9df1;
    FUN_00aad52d();
    local_c = 0xffffffff;
    if (0xf < local_1c0) {
      pppuStack_1f4 = (undefined ***)local_1d4[0];
                    /* WARNING: Subroutine does not return */
      pcStack_1f8 = &UNK_004d9e10;
      FUN_00aae91b();
    }
  } while( true );
}

