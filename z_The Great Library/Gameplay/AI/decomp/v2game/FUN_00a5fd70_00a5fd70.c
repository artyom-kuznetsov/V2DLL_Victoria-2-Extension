// FUN_00a5fd70 @ 00a5fd70 body=[[00a5fd70, 00a5feb6] [00a5feba, 00a5fec8] [00a5fecc, 00a5fee1]]


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00a5fd70(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  byte *******pppppppbVar6;
  hostent *phVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  byte *******local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = FUN_00a5fc80();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (byte *******)((uint)local_2c[0] & 0xffffff00);
  FUN_00408ed0(uVar3,0,0xffffffff);
  local_8 = 0;
  pbVar4 = DAT_00f0ff30;
  if (DAT_00f0ff44 < 0x10) {
    pbVar4 = (byte *)&DAT_00f0ff30;
  }
  pbVar9 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_00a5fdf0:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00a5fdf5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_00a5fdf0;
    pbVar4 = pbVar4 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00a5fdf5:
  if (iVar5 == 0) {
    pppppppbVar6 = local_2c[0];
    if (local_18 < 0x10) {
      pppppppbVar6 = (byte *******)local_2c;
    }
    pbVar4 = &DAT_00ded94d;
    do {
      bVar1 = *(byte *)pppppppbVar6;
      bVar11 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_00a5fe32:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00a5fe37;
      }
      if (bVar1 == 0) break;
      bVar1 = *(byte *)((int)pppppppbVar6 + 1);
      bVar11 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_00a5fe32;
      pppppppbVar6 = (byte *******)((int)pppppppbVar6 + 2);
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00a5fe37:
    if (iVar5 != 0) {
      pppppppbVar6 = local_2c[0];
      if (local_18 < 0x10) {
        pppppppbVar6 = (byte *******)local_2c;
      }
      phVar7 = gethostbyname((char *)pppppppbVar6);
      if (phVar7 != (hostent *)0x0) {
        pcVar8 = inet_ntoa((in_addr)((_union_1226 *)*phVar7->h_addr_list)->S_un_b);
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
        pcVar10 = pcVar8;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        FUN_00409350(pcVar8,(int)pcVar10 - (int)(pcVar8 + 1));
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_00408ed0(local_48,0,0xffffffff);
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
      }
    }
  }
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return &DAT_00f0ff30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

