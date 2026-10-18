// FUN_00991f90 @ 00991f90 body=[[00991f90, 00992128] [0099212c, 00992152] [00992156, 0099222b]]


void FUN_00991f90(char *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *****pppppuVar6;
  int iVar7;
  undefined4 uVar8;
  int *local_114;
  undefined4 ****local_110 [4];
  undefined4 local_100;
  uint local_fc;
  int local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5817c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004138b0(param_2,&local_114,*param_2,param_2[1]);
  FUN_00419660(0x400);
  piVar2 = (int *)PHYSFS_enumerateFiles(param_1);
  iVar7 = *piVar2;
  local_114 = piVar2;
  do {
    if (iVar7 == 0) {
      PHYSFS_freeList(local_114);
      ExceptionList = local_14;
      return;
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110[0] = (undefined4 ****)((uint)local_110[0] & 0xffffff00);
    local_c = 0;
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar4 = (char *)*piVar2;
    pcVar5 = pcVar4 + 1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if ((pcVar3 + (int)(pcVar4 + ((1 - (int)pcVar5) - (int)(param_1 + 1))) != (char *)0xf) &&
       (cVar1 = FUN_004094e0(pcVar3 + (int)(pcVar4 + ((1 - (int)pcVar5) - (int)(param_1 + 1))),1),
       cVar1 != '\0')) {
      local_100 = 0;
      pppppuVar6 = (undefined4 *****)local_110[0];
      if (local_fc < 0x10) {
        pppppuVar6 = local_110;
      }
      *(undefined1 *)pppppuVar6 = 0;
    }
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00448740(param_1,(int)pcVar3 - (int)(param_1 + 1));
    FUN_00448740(&DAT_00dedc68,1);
    pcVar3 = (char *)*piVar2;
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00448740(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    pppppuVar6 = (undefined4 *****)local_110[0];
    if (local_fc < 0x10) {
      pppppuVar6 = local_110;
    }
    iVar7 = PHYSFS_isDirectory(pppppuVar6);
    if (iVar7 != 0) {
      pcVar3 = (char *)*piVar2;
      cVar1 = *pcVar3;
      pcVar5 = pcVar3;
      while (cVar1 != '\0') {
        if (cVar1 < '\0') {
          local_e0 = 0xf;
          local_e4 = 0;
          local_f4[0] = (uint)local_f4[0]._1_3_ << 8;
          FUN_00409350("virtualfilesystem.cpp",0x15);
          local_c._0_1_ = 2;
          uVar8 = FUN_004015b0(local_f4,0x1ab,0x1000);
          local_c._0_1_ = 3;
          FUN_00987d50(uVar8,"Invalid directoryname found: ",0x1d,0);
          FUN_00418e30(uVar8,*piVar2);
          local_c = CONCAT31(local_c._1_3_,2);
          FUN_00987ac0(appuStack_60);
          appuStack_60[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_60);
          if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_f4[0]);
          }
          goto LAB_00992130;
        }
        pcVar4 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar4;
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4[0] = (uint)local_f4[0]._1_3_ << 8;
      pcVar5 = pcVar3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00a840b0();
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f4[0]);
      }
    }
LAB_00992130:
    piVar2 = piVar2 + 1;
    local_c = 0xffffffff;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110[0]);
    }
    iVar7 = *piVar2;
  } while( true );
}

