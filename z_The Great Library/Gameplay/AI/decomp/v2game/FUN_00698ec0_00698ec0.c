// FUN_00698ec0 @ 00698ec0 body=[[00698ec0, 00698fa8] [00698fac, 006990a0] [006990a4, 006990cb] [006990cf, 006990e1]]


/* WARNING: Type propagation algorithm not settling */

int * FUN_00698ec0(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  byte *******pppppppbVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  char *in_ECX;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  char local_68 [32];
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  byte *******local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c2b0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (byte *******)((uint)local_2c[0] & 0xffffff00);
  ExceptionList = &local_10;
  FUN_00408ed0(in_ECX,0,0xffffffff);
  local_8 = 0;
  pppppppbVar3 = local_2c[0];
  if (local_18 < 0x10) {
    pppppppbVar3 = (byte *******)local_2c;
  }
  pbVar7 = &DAT_00ded94d;
  do {
    bVar1 = *(byte *)pppppppbVar3;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 != *pbVar7) {
LAB_00698f30:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_00698f35;
    }
    if (bVar1 == 0) break;
    bVar1 = *(byte *)((int)pppppppbVar3 + 1);
    bVar9 = bVar1 < pbVar7[1];
    if (bVar1 != pbVar7[1]) goto LAB_00698f30;
    pppppppbVar3 = (byte *******)((int)pppppppbVar3 + 2);
    pbVar7 = pbVar7 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00698f35:
  if (iVar4 == 0) {
    FUN_00409350(&DAT_00e0b438,1);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8._0_1_ = 1;
  pcVar5 = __itoa(param_1,local_68,10);
  pcVar8 = pcVar5;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
  local_8._0_1_ = 2;
  FUN_00448aa0(local_48,0,0xffffffff);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  piVar6 = (int *)(**(code **)(*param_3 + 0x34))(local_2c);
  if (piVar6 == (int *)0x0) {
    if (0xf < *(uint *)(in_ECX + 0x14)) {
      in_ECX = *(char **)in_ECX;
    }
    pcVar8 = "";
    do {
      if (((*in_ECX != *pcVar8) || (*in_ECX == '\0')) || (pcVar5 = in_ECX + 1, *pcVar5 != pcVar8[1])
         ) break;
      in_ECX = in_ECX + 2;
      pcVar8 = pcVar8 + 2;
    } while (*pcVar5 != '\0');
    pppppppbVar3 = local_2c[0];
    if (local_18 < 0x10) {
      pppppppbVar3 = (byte *******)local_2c;
    }
    piVar6 = (int *)FUN_009e6050(param_3,pppppppbVar3);
    if (param_4 != 0) {
      (**(code **)(piVar6[0x15] + 4))(param_4);
    }
    (**(code **)(*piVar6 + 0xd4))(param_1);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 3;
    cVar2 = FUN_00416db0();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    if (cVar2 == '\0') {
      (**(code **)(*piVar6 + 0x48))(param_2);
    }
    (**(code **)(*piVar6 + 0x34))();
  }
  else {
    (**(code **)(*piVar6 + 0x34))();
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return piVar6;
}

