// FUN_008b9530 @ 008b9530 body=[[008b9530, 008b95fd] [008b9606, 008b9bcc] [008b9bd0, 008b9c11] [008b9c1a, 008ba0f4] [008ba0f8, 008ba1dd] [008ba1e1, 008ba1fd] [008ba204, 008ba275] [008ba27b, 008ba2e5] [008ba2e9, 008ba31e] [008ba322, 008ba34d] [008ba351, 008ba360] [008ba364, 008ba383] [008ba387, 008ba39f]]


/* WARNING: Removing unreachable block (ram,0x008ba37a) */
/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_008b9530(undefined1 *param_1,int param_2,undefined4 param_3,int param_4,char param_5)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  LPSTR ******lpsz;
  int *in_ECX;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 *local_718;
  undefined1 *local_714;
  uint local_708;
  undefined4 local_6f8;
  uint local_6f4;
  uint local_6ec [4];
  undefined4 local_6dc;
  uint local_6d8;
  LPSTR ******apppppppCStack_6d0 [4];
  undefined4 uStack_6c0;
  uint uStack_6bc;
  uint local_6b4;
  undefined4 local_6a4;
  uint local_6a0;
  undefined1 local_698 [20];
  uint uStack_684;
  uint local_67c [4];
  undefined4 local_66c;
  uint local_668;
  undefined1 local_660 [28];
  undefined1 local_644 [28];
  undefined1 local_628 [28];
  undefined1 local_60c [28];
  undefined1 local_5f0 [28];
  undefined1 local_5d4 [28];
  undefined1 local_5b8 [28];
  undefined1 local_59c [28];
  undefined1 local_580 [28];
  undefined1 local_564 [28];
  undefined1 local_548 [28];
  undefined1 local_52c [28];
  undefined1 local_510 [20];
  undefined1 local_4fc [20];
  undefined1 local_4e8 [20];
  undefined1 local_4d4 [20];
  undefined1 local_4c0 [20];
  undefined1 local_4ac [20];
  undefined1 local_498 [20];
  undefined1 local_484 [20];
  undefined1 local_470 [20];
  undefined1 local_45c [20];
  undefined1 local_448 [20];
  undefined1 local_434 [20];
  undefined1 local_420 [440];
  undefined1 local_268 [72];
  int local_220 [65];
  int local_11c [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba3928;
  pvStack_14 = ExceptionList;
  local_718 = (undefined1 *)0x0;
  ExceptionList = &pvStack_14;
  FUN_008a8650();
  FUN_00876240();
  local_c = 0;
  piVar3 = (int *)in_ECX[7];
  local_718 = (undefined1 *)piVar3[0x42];
  if ((undefined1 *)piVar3[0x43] == (undefined1 *)0x0) {
    piVar4 = piVar3;
    piVar6 = local_220;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    if (local_220[0] < 0x477) {
      if (local_220[0] == 0x476) {
        local_6d8 = 0xf;
        local_6dc = 0;
        local_6ec[0] = local_6ec[0] & 0xffffff00;
        FUN_00409350("TRIGGER_SEA_ZONE",0x10);
        local_c._0_1_ = 0x12;
        FUN_009a8ee0(local_420,local_6ec);
        local_c._0_1_ = 0x13;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 0x14;
        FUN_00408ed0();
        if (0xf < local_6a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_6a0 = 0xf;
        local_6a4 = 0;
        local_6b4 = local_6b4 & 0xffffff00;
        local_c = CONCAT31(local_c._1_3_,0x12);
        FUN_009a9740();
        if (0xf < local_6d8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        goto LAB_008ba069;
      }
      if (local_220[0] < 0x3df) {
        if (local_220[0] == 0x3de) {
          FUN_009885d0();
          local_c._0_1_ = 0x1e;
          FUN_009a8ee0(local_4fc,local_60c);
          local_c._0_1_ = 0x1f;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
          local_c._0_1_ = 0x20;
          FUN_00408ed0();
          FUN_00408ad0();
          local_c = CONCAT31(local_c._1_3_,0x1e);
          FUN_009a9740();
        }
        else if (local_220[0] < 0x297) {
          if (local_220[0] == 0x296) {
            FUN_009885d0();
            local_c._0_1_ = 9;
            FUN_009a8ee0(local_434,local_5b8);
            local_c._0_1_ = 10;
            iVar5 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
            local_c._0_1_ = 0xb;
            FUN_00408ed0();
            FUN_00408ad0();
            local_c = CONCAT31(local_c._1_3_,9);
            FUN_009a9740();
          }
          else if (local_220[0] == 0xc) {
            piVar4 = local_11c;
            for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar4 = *piVar3;
              piVar3 = piVar3 + 1;
              piVar4 = piVar4 + 1;
            }
            iVar5 = FUN_00aaf0c5();
            (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar5 * 4) + 0x1c))();
            local_c = CONCAT31(local_c._1_3_,2);
            FUN_00408ed0();
          }
          else {
            if (local_220[0] != 0x295) goto LAB_008ba069;
            FUN_009885d0();
            local_c._0_1_ = 6;
            FUN_009a8ee0(local_4d4,local_580);
            local_c._0_1_ = 7;
            iVar5 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
            local_c._0_1_ = 8;
            FUN_00408ed0();
            FUN_00408ad0();
            local_c = CONCAT31(local_c._1_3_,6);
            FUN_009a9740();
          }
        }
        else {
          if (local_220[0] != 0x38b) goto LAB_008ba069;
          FUN_009885d0();
          local_c._0_1_ = 0x15;
          FUN_009a8ee0(local_45c,local_548);
          local_c._0_1_ = 0x16;
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
          local_c._0_1_ = 0x17;
          FUN_00408ed0();
          FUN_00408ad0();
          local_c = CONCAT31(local_c._1_3_,0x15);
          FUN_009a9740();
        }
      }
      else if (local_220[0] == 1000) {
        FUN_009885d0();
        local_c._0_1_ = 3;
        FUN_009a8ee0(local_4ac,local_59c);
        local_c._0_1_ = 4;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 5;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,3);
        FUN_009a9740();
      }
      else if (local_220[0] == 0x405) {
        FUN_009885d0();
        local_c._0_1_ = 0x1b;
        FUN_009a8ee0(local_4c0,local_5d4);
        local_c._0_1_ = 0x1c;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 0x1d;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0x1b);
        FUN_009a9740();
      }
      else {
        if (local_220[0] != 0x442) goto LAB_008ba069;
        FUN_009885d0();
        local_c._0_1_ = 0xc;
        FUN_009a8ee0(local_4e8,local_660);
        local_c._0_1_ = 0xd;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 0xe;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0xc);
        FUN_009a9740();
      }
    }
    else if (local_220[0] < 0x728) {
      if (local_220[0] == 0x727) {
        FUN_009885d0();
        local_c._0_1_ = 0xf;
        FUN_009a8ee0(local_470,local_644);
        local_c._0_1_ = 0x10;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 0x11;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0xf);
        FUN_009a9740();
      }
      else if (local_220[0] == 0x6a5) {
        iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4)
                                 + 0xe64) + 0x50);
        local_718 = *(undefined1 **)(iVar5 + 0x1c);
        local_714 = *(undefined1 **)(iVar5 + 0x20);
        FUN_0055dd40();
        local_c = CONCAT31(local_c._1_3_,0x2d);
        FUN_00408ed0();
      }
      else if (local_220[0] == 0x717) {
        FUN_009885d0();
        local_c._0_1_ = 0x21;
        FUN_009a8ee0(local_510,local_52c);
        local_c._0_1_ = 0x22;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 0x23;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0x21);
        FUN_009a9740();
      }
      else {
        if (local_220[0] != 0x719) goto LAB_008ba069;
        FUN_009885d0();
        local_c._0_1_ = 0x18;
        FUN_009a8ee0(local_498,local_564);
        local_c._0_1_ = 0x19;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_c._0_1_ = 0x1a;
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0x18);
        FUN_009a9740();
      }
    }
    else if (local_220[0] == 0x879) {
      FUN_009885d0();
      local_c._0_1_ = 0x24;
      FUN_009a8ee0(local_67c,local_698);
      local_c._0_1_ = 0x25;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x26;
      FUN_00408ed0();
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,0x24);
      FUN_009a9740();
    }
    else if (local_220[0] == 0x9eb) {
      FUN_009885d0();
      local_c._0_1_ = 0x27;
      FUN_009a8ee0(local_484,local_5f0);
      local_c._0_1_ = 0x28;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x29;
      FUN_00408ed0();
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,0x27);
      FUN_009a9740();
    }
    else {
      if (local_220[0] != 0xa26) goto LAB_008ba069;
      FUN_009885d0();
      local_c._0_1_ = 0x2a;
      FUN_009a8ee0(local_448,local_628);
      local_c._0_1_ = 0x2b;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_c._0_1_ = 0x2c;
      FUN_00408ed0();
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,0x2a);
      FUN_009a9740();
    }
    FUN_00408ad0();
  }
  else {
    local_718 = (undefined1 *)piVar3[0x42];
    local_714 = (undefined1 *)piVar3[0x43];
    FUN_0055dd40();
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00408ed0();
    if (0xf < local_6a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
LAB_008ba069:
  local_6f4 = 0xf;
  local_6f8 = 0;
  local_708 = local_708 & 0xffffff00;
  local_668 = 0xf;
  local_66c = 0;
  local_67c[0] = local_67c[0] & 0xffffff00;
  iVar5 = param_4;
  if (0 < param_4) {
    do {
      local_c._0_1_ = 0x2f;
      local_6d8 = 0xf;
      local_6dc = 0;
      local_6ec[0] = local_6ec[0] & 0xffffff00;
      FUN_00409350(&DAT_00e29ba0,3);
      local_c._0_1_ = 0x30;
      FUN_00448aa0();
      local_c._0_1_ = 0x2f;
      if (0xf < local_6d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_c._0_1_ = 0x2f;
  FUN_00448aa0();
  if ((param_4 == 0) && (param_5 != '\0')) {
    cVar2 = (**(code **)(*in_ECX + 0x18))();
    if (cVar2 == (char)param_3) {
      FUN_00448740(&DAT_00e2cfe8,7);
    }
    else {
      FUN_00448740(&DAT_00e2cff0,7);
    }
  }
  FUN_00448aa0();
  FUN_008b7f70(apppppppCStack_6d0,local_268,param_3,0,0);
  local_c._0_1_ = 0x31;
  piVar3 = (int *)FUN_00989510(&local_718,10);
  puVar1 = local_718;
  if (local_718 != (undefined1 *)0x0) {
    while( true ) {
      if (puVar1 == local_714) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(puVar1 + 0x14)) break;
      *(undefined4 *)(puVar1 + 0x14) = 0xf;
      *(undefined4 *)(puVar1 + 0x10) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x1c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((piVar3[1] - *piVar3) / 0x1c < 3) {
    lpsz = apppppppCStack_6d0[0];
    if (uStack_6bc < 0x10) {
      lpsz = (LPSTR ******)apppppppCStack_6d0;
    }
    CharLowerBuffA((LPSTR)lpsz,1);
    FUN_00988fa0();
    local_c._0_1_ = 0x33;
    FUN_00448aa0();
    local_c = CONCAT31(local_c._1_3_,0x31);
    if (0xf < uStack_684) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00448740(&DAT_00e0ecb4,2);
    FUN_008b7f70(local_698,local_268,param_3,param_4 + 1,0);
    local_c._0_1_ = 0x32;
    FUN_00448aa0();
    local_c = CONCAT31(local_c._1_3_,0x31);
    if (0xf < uStack_684) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0();
  if (0xf < uStack_6bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_6bc = 0xf;
  uStack_6c0 = 0;
  apppppppCStack_6d0[0] = (LPSTR ******)((uint)apppppppCStack_6d0[0] & 0xffffff00);
  if (0xf < local_668) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_6f4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_14;
  return param_1;
}

