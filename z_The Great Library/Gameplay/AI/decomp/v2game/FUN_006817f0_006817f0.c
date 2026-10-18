// FUN_006817f0 @ 006817f0 body=[[006817f0, 00682194] [006821af, 0068268d]]


/* WARNING: Removing unreachable block (ram,0x0068214c) */
/* WARNING: Removing unreachable block (ram,0x00682150) */
/* WARNING: Removing unreachable block (ram,0x0068218f) */

void FUN_006817f0(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_ECX;
  int *piVar7;
  undefined4 *puVar8;
  int local_248;
  int local_1e0 [5];
  undefined1 auStack_1cc [344];
  undefined **ppuStack_74;
  void *pvStack_28;
  undefined1 uStack_20;
  void *pvStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar3 = DAT_01259abc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1305;
  local_14 = ExceptionList;
  if (param_2 < 0x485) {
    if (param_2 == 0x484) {
      return;
    }
    if (param_2 < 0x284) {
      if (param_2 == 0x283) {
        ExceptionList = &local_14;
        FUN_009a63f0();
        FUN_00409810();
        ExceptionList = local_14;
        return;
      }
      if (param_2 < 0x1c2) {
        if (param_2 == 0x1c1) {
          ExceptionList = &local_14;
          FUN_005e5a20();
          ExceptionList = local_14;
          return;
        }
        if (param_2 < 0x160) {
          if (param_2 == 0x15f) {
            return;
          }
          if (param_2 == 0xb) {
            ExceptionList = &local_14;
            FUN_009a19f0();
            if (DAT_01258a90 != 0xffffed98) {
              ExceptionList = local_14;
              return;
            }
            FUN_009c17f0();
            ExceptionList = local_14;
            return;
          }
          if (param_2 == 0x15e) {
            return;
          }
        }
        else if (param_2 == 0x160) {
          return;
        }
      }
      else {
        if (param_2 == 0x1ca) {
          ExceptionList = &local_14;
          DAT_00f09720 = FUN_00aaf0c5();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x23d) {
          ExceptionList = &local_14;
          FUN_009a1c10();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x24c) {
          ExceptionList = &local_14;
          (**(code **)(*(int *)in_ECX[0x2f3] + 0xc))();
          ExceptionList = pvStack_18;
          return;
        }
      }
    }
    else {
      if (param_2 < 0x3e6) {
        if (param_2 == 0x3e5) {
          ExceptionList = &local_14;
          DAT_00f20c1c = FUN_00aaf0c5();
          DAT_00f20c14 = 0;
          ExceptionList = local_14;
          return;
        }
        switch(param_2) {
        case 0x2a1:
          ExceptionList = &local_14;
          FUN_009885d0();
          FUN_0043bb10();
          in_ECX[0x2c3] = iVar3;
          ExceptionList = local_14;
          return;
        default:
          goto switchD_006819fc_caseD_2a2;
        case 0x2ba:
          local_c = 3;
          ExceptionList = &local_14;
          FUN_005e5a20();
          FUN_00461f90();
          ExceptionList = local_14;
          return;
        case 0x2bf:
          goto switchD_006819fc_caseD_2bf;
        case 0x2f9:
          ExceptionList = &local_14;
          DAT_00f096cc = FUN_00aaf0c5();
          ExceptionList = local_14;
          return;
        case 0x307:
          ExceptionList = &local_14;
          DAT_00f096c4 = FUN_00aaf0c5();
          ExceptionList = local_14;
          return;
        case 0x339:
          ExceptionList = &local_14;
          FUN_009885d0();
          FUN_0043bb10();
          ExceptionList = local_14;
          return;
        case 0x342:
          ExceptionList = &local_14;
          (**(code **)(in_ECX[0x29f] + 0xc))();
          ExceptionList = pvStack_18;
          return;
        case 0x34d:
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          local_c = 1;
          if (iVar3 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_00931620();
          }
          local_c = 0xffffffff;
          (**(code **)(*piVar6 + 0xc))();
          cVar1 = FUN_00936710();
          if (cVar1 == '\0') {
            (**(code **)*piVar6)();
            ExceptionList = pvStack_1c;
            return;
          }
          iVar3 = in_ECX[0x2d0];
          puVar2 = (undefined4 *)FUN_00aae9af();
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            *puVar2 = piVar6;
            puVar2[1] = iVar3;
            puVar2[2] = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
          }
          iVar4 = in_ECX[0x2d1];
          in_ECX[0x2d0] = (int)puVar2;
          in_ECX[0x2d1] = iVar4 + 1;
          if (iVar4 == 0) {
            in_ECX[0x2cf] = (int)puVar2;
            ExceptionList = pvStack_18;
            return;
          }
          break;
        case 0x34e:
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          local_c = 2;
          if (iVar3 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_00931620();
          }
          local_c = 0xffffffff;
          (**(code **)(*piVar6 + 0xc))();
          iVar3 = in_ECX[0x2d4];
          puVar2 = (undefined4 *)FUN_00aae9af();
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            *puVar2 = piVar6;
            puVar2[1] = iVar3;
            puVar2[2] = 0;
            *(undefined1 *)(puVar2 + 3) = 0;
          }
          iVar4 = in_ECX[0x2d5];
          in_ECX[0x2d4] = (int)puVar2;
          in_ECX[0x2d5] = iVar4 + 1;
          if (iVar4 == 0) {
            in_ECX[0x2d3] = (int)puVar2;
            ExceptionList = pvStack_18;
            return;
          }
          break;
        case 0x368:
          ExceptionList = &local_14;
          (**(code **)(in_ECX[0x2ad] + 0xc))();
          ExceptionList = pvStack_18;
          return;
        case 899:
          ExceptionList = &local_14;
          DAT_00f0971c = FUN_00aaf0c5();
          ExceptionList = local_14;
          return;
        }
        *(undefined4 **)(iVar3 + 8) = puVar2;
        ExceptionList = pvStack_18;
        return;
      }
      if (param_2 == 0x40d) {
        ExceptionList = &local_14;
        (**(code **)(in_ECX[0x22] + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
  }
  else if (param_2 < 0x8f3) {
    if (param_2 == 0x8f2) {
      local_c = 4;
      ExceptionList = &local_14;
      FUN_005e5a20();
      FUN_00549980();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x73b) {
      if (param_2 == 0x73a) {
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)FUN_004e0ae0();
        }
        (**(code **)(*piVar6 + 0xc))();
        puVar8 = (undefined4 *)(piVar6[0xf] * 0x10 + in_ECX[0x2e6]);
        iVar3 = puVar8[1];
        puVar2 = (undefined4 *)FUN_00aae9af();
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *puVar2 = piVar6;
          puVar2[1] = iVar3;
          puVar2[2] = 0;
          *(undefined1 *)(puVar2 + 3) = 0;
        }
        iVar4 = puVar8[2];
        puVar8[1] = puVar2;
        puVar8[2] = iVar4 + 1;
        if (iVar4 != 0) {
          *(undefined4 **)(iVar3 + 8) = puVar2;
          ExceptionList = pvStack_18;
          return;
        }
        *puVar8 = puVar2;
        ExceptionList = pvStack_18;
        return;
      }
      if (param_2 < 0x69a) {
        if (param_2 == 0x699) {
          ExceptionList = &local_14;
          FUN_0043ceb0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x4a2) {
          ExceptionList = &local_14;
          FUN_004ca680();
          local_c = 6;
          (**(code **)(local_1e0[0] + 0xc))();
          iVar3 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + local_1e0[1] * 4);
          FUN_004ca2e0();
          *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(iVar3 + 0x6c);
          puStack_10 = (undefined1 *)0xffffffff;
          _eh_vector_destructor_iterator_(auStack_1cc,0x1c,4,FUN_004010c0);
          ExceptionList = pvStack_18;
          return;
        }
        ExceptionList = &local_14;
        if (param_2 == 0x652) {
          while( true ) {
            piVar6 = *(int **)(param_1 + 0x1c);
            if ((char)piVar6[0x44] == '\0') {
              iVar3 = (**(code **)(*piVar6 + 4))();
              piVar6[2] = iVar3;
              if (iVar3 == 0) {
                piVar6[3] = 0x13;
              }
              *(undefined1 *)(piVar6 + 0x44) = 1;
            }
            piVar6 = piVar6 + 3;
            piVar7 = local_1e0;
            for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            if ((local_1e0[0] == 4) || (local_1e0[0] == 0x13)) break;
            FUN_009a1440();
            FUN_009a19f0();
            iVar3 = FUN_009c16d0();
            if (iVar3 != 0) {
              FUN_0068f090();
            }
          }
          (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
          ExceptionList = local_14;
          return;
        }
      }
      else if (param_2 == 0x705) {
        ExceptionList = &local_14;
        (**(code **)(in_ECX[0x2eb] + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
    else {
      if (param_2 == 0x7a4) {
        ExceptionList = &local_14;
        _atol((char *)(param_1 + 0x22c));
        FUN_009b7670();
        in_ECX[0x29d] = 0;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x82c) {
        ExceptionList = &local_14;
        FUN_009a1bb0();
        iVar3 = FUN_0068b610();
        *(undefined1 *)(iVar3 + 0x30) = 0;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0x82d) {
        ExceptionList = &local_14;
        FUN_009a1c10();
        iVar3 = FUN_0068b610();
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        ExceptionList = local_14;
        return;
      }
    }
  }
  else if (param_2 < 0xa0e) {
    if (param_2 == 0xa0d) {
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      local_c = 0;
      if (iVar3 != 0) {
        FUN_00401670();
      }
      local_c = 0xffffffff;
      FUN_00402230();
      FUN_0068f390();
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      ExceptionList = local_14;
      return;
    }
    switch(param_2) {
    case 0x8f8:
      ExceptionList = &local_14;
      (**(code **)(in_ECX[0x305] + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x903:
      ExceptionList = &local_14;
      (**(code **)(in_ECX[0x31b] + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x915:
      ExceptionList = &local_14;
      FUN_0068ff60();
      FUN_0068f240();
      if ((char)in_ECX[0x2ee] == '\0') {
        ExceptionList = local_14;
        return;
      }
      FUN_0068ff60();
      ExceptionList = local_14;
      return;
    case 0x95a:
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      local_c = 5;
      if (iVar3 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)FUN_008a5910();
      }
      local_c = 0xffffffff;
      (**(code **)(*piVar6 + 0xc))();
      iVar3 = *(int *)(in_ECX[0x2b7] + piVar6[6] * 4);
      if (*(int *)(iVar3 + 0x20) == 0) {
        ExceptionList = local_14;
        return;
      }
      puVar2 = *(undefined4 **)(iVar3 + 0x6c);
      puVar8 = *(undefined4 **)(iVar3 + 0x68);
      if (puVar8 != puVar2) {
        do {
          if ((int *)*puVar8 == piVar6) break;
          puVar8 = puVar8 + 1;
        } while (puVar8 != puVar2);
        if (puVar8 != puVar2) {
          ExceptionList = local_14;
          return;
        }
      }
      FUN_0068f390();
      ExceptionList = local_14;
      return;
    case 0x9ad:
      ExceptionList = &local_14;
      FUN_009a63f0();
      FUN_00409810();
      FUN_0067f1a0();
      ExceptionList = local_14;
      return;
    case 0x9ae:
      ExceptionList = &local_14;
      piVar6 = (int *)FUN_0055c6c0();
      in_ECX[0x33a] = *piVar6;
      in_ECX[0x33b] = piVar6[1];
      ExceptionList = local_14;
      return;
    case 0x9af:
      ExceptionList = &local_14;
      FUN_009885d0();
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    case 0x9b0:
      goto LAB_0068266e;
    case 0x9cd:
      ExceptionList = &local_14;
      FUN_00457980();
      (**(code **)(*(int *)in_ECX[0x33d] + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x9e5:
      ExceptionList = &local_14;
      FUN_0042b410();
      (**(code **)(*(int *)in_ECX[0x33e] + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
  }
  else if (param_2 == 0xa55) {
LAB_0068266e:
    ExceptionList = &local_14;
    FUN_009a1bb0();
    ExceptionList = local_14;
    return;
  }
switchD_006819fc_caseD_2a2:
  ExceptionList = &local_14;
  iVar3 = FUN_00aaf0c5();
  if ((0 < iVar3) && (iVar4 = (**(code **)(*in_ECX + 0x18))(), iVar3 < iVar4)) {
    (**(code **)(**(int **)(in_ECX[0x2b3] + iVar3 * 4) + 0xc))();
    ExceptionList = pvStack_18;
    return;
  }
  FUN_0055c6c0();
  if (local_248 != 0) {
    (**(code **)(**(int **)(in_ECX[0x2b7] + local_248 * 4) + 0xc))();
    FUN_009885d0();
    puStack_10 = (undefined1 *)0x7;
    FUN_0055dd40();
    puStack_10._0_1_ = 8;
    FUN_004015b0();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
    FUN_00987d50();
    uVar5 = FUN_00418e30();
    FUN_00401280(uVar5);
    uStack_20 = 8;
    FUN_00987ac0();
    ppuStack_74 = std::ios_base::vftable;
    FUN_00aad52d();
    FUN_00408ad0();
    FUN_00408ad0();
    ExceptionList = pvStack_28;
    return;
  }
  FUN_009885d0();
  local_c = 10;
  piVar6 = (int *)FUN_00973bd0();
  local_c = 0xffffffff;
  FUN_00408ad0();
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xc))();
    ExceptionList = pvStack_18;
    return;
  }
switchD_006819fc_caseD_2bf:
  ExceptionList = local_14;
  return;
}

