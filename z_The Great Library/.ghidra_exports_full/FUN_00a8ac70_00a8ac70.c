// FUN_00a8ac70 @ 00a8ac70 body=[[00a8ac70, 00a8ac9c] [00a8aca0, 00a8ae25]]


void FUN_00a8ac70(int param_1,byte param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  u_long netlong;
  uint uVar4;
  undefined1 local_3c;
  byte local_3b;
  undefined1 local_3a;
  undefined4 local_38;
  u_long local_30;
  u_long local_2c;
  u_long local_28;
  u_long local_24;
  u_long local_20;
  u_long local_10;
  u_long local_c;
  u_long local_8;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 < *(int *)(param_1 + 0x24) * 0xe8 + uVar4) {
    piVar2 = (int *)(uVar4 + 0x18);
    do {
      if ((*piVar2 == 4) &&
         (piVar3 = (int *)((uint)param_2 * 0x20 + piVar2[1]), (uint)param_2 < (uint)piVar2[2])) {
        uVar4 = *(ushort *)(piVar2 + 0x1f) - 0x2c;
        if (uVar4 < (uint)param_3[3]) {
          local_10 = htonl(((param_3[3] - 1U) + uVar4) / uVar4);
          local_c = htonl(*piVar3 + 1);
          netlong = 0;
          param_3[1] = 1;
          local_8 = 0;
          if (param_3[3] != 0) {
            do {
              local_3b = param_2;
              local_3c = 8;
              local_3a = 1;
              local_38 = 0x20;
              local_30 = local_c;
              local_2c = local_10;
              local_28 = htonl(local_8);
              local_24 = htonl(param_3[3]);
              local_20 = ntohl(netlong);
              if (param_3[3] - netlong < uVar4) {
                uVar4 = param_3[3] - netlong;
              }
              FUN_00a8a550(piVar2 + -6,&local_3c,param_3,netlong,uVar4);
              local_8 = local_8 + 1;
              netlong = netlong + uVar4;
            } while (netlong < (uint)param_3[3]);
          }
        }
        else {
          local_3b = param_2;
          if ((param_3[1] & 1U) == 0) {
            local_38 = 0x10;
            if ((param_3[1] & 2U) == 0) {
              iVar1 = piVar3[1];
              local_3c = 7;
              local_3a = 0;
            }
            else {
              iVar1 = piVar2[0x2e];
              local_3c = 0xb;
              local_3a = 2;
            }
            local_30 = htonl(iVar1 + 1);
          }
          else {
            local_3c = 6;
            local_3a = 1;
            local_38 = 0xc;
          }
          FUN_00a8a550(piVar2 + -6,&local_3c,param_3,0,(short)param_3[3]);
        }
      }
      piVar3 = piVar2 + 0x34;
      piVar2 = piVar2 + 0x3a;
    } while (piVar3 < (int *)(*(int *)(param_1 + 0x24) * 0xe8 + *(int *)(param_1 + 0x20)));
  }
  if (*param_3 == 0) {
    (*(code *)PTR__free_00f071fc)(param_3[2]);
    (*(code *)PTR__free_00f071fc)(param_3);
  }
  return;
}

