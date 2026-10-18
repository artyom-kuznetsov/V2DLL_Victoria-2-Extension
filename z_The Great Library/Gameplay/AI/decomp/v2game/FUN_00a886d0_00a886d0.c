// FUN_00a886d0 @ 00a886d0 body=[[00a886d0, 00a887f7] [00a887fa, 00a88980]]


int * FUN_00a886d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  u_short uVar2;
  int *piVar3;
  u_long uVar4;
  uint uVar5;
  int *piVar6;
  u_long uVar7;
  int iVar8;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  u_short local_2c;
  u_short local_2a;
  u_long local_28;
  u_long local_24;
  u_long local_20;
  u_long local_1c;
  u_long local_18;
  u_long local_14;
  u_long local_10;
  int *local_c;
  u_long local_8;
  
  if (*(uint *)(param_3 + 4) < 0x2c) {
    return (int *)0x0;
  }
  local_8 = ntohl(*(u_long *)(param_3 + 0x14));
  if (0xfe < local_8 - 1) {
    return (int *)0x0;
  }
  piVar3 = *(int **)(param_1 + 0x20);
  local_c = piVar3 + *(int *)(param_1 + 0x24) * 0x3a;
  if (piVar3 < local_c) {
    piVar3 = piVar3 + 3;
    do {
      if ((((piVar3[3] != 0) && (*piVar3 == *(int *)(param_1 + 0x7c0))) &&
          ((short)piVar3[1] == *(short *)(param_1 + 0x7c4))) &&
         (piVar3[-1] == *(int *)(param_2 + 8))) {
        return (int *)0x0;
      }
      piVar6 = piVar3 + 0x37;
      piVar3 = piVar3 + 0x3a;
    } while (piVar6 < local_c);
  }
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 < local_c) {
    do {
      if (piVar3[6] == 0) break;
      piVar3 = piVar3 + 0x3a;
    } while (piVar3 < local_c);
    if (piVar3 < local_c) {
      piVar3[6] = 2;
      piVar3[2] = *(int *)(param_2 + 8);
      piVar3[3] = *(int *)(param_1 + 0x7c0);
      piVar3[4] = *(int *)(param_1 + 0x7c4);
      uVar2 = ntohs(*(u_short *)(param_3 + 0xc));
      *(u_short *)(piVar3 + 1) = uVar2;
      uVar4 = ntohl(*(u_long *)(param_3 + 0x18));
      piVar3[9] = uVar4;
      uVar4 = ntohl(*(u_long *)(param_3 + 0x1c));
      piVar3[10] = uVar4;
      uVar4 = ntohl(*(u_long *)(param_3 + 0x20));
      piVar3[0x1e] = uVar4;
      uVar4 = ntohl(*(u_long *)(param_3 + 0x24));
      piVar3[0x1c] = uVar4;
      uVar4 = ntohl(*(u_long *)(param_3 + 0x28));
      iVar8 = local_8 * 0x20;
      piVar3[0x1d] = uVar4;
      uVar5 = (*(code *)PTR__malloc_00f071f8)(iVar8);
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        _abort();
      }
      piVar3[7] = uVar5;
      piVar3[8] = local_8;
      if (uVar5 < iVar8 + uVar5) {
        piVar6 = (int *)(uVar5 + 0x1c);
        do {
          piVar6[-7] = 0;
          piVar6[-6] = 0;
          piVar6[-5] = 0;
          piVar6[-4] = 0;
          piVar1 = piVar6 + -3;
          piVar6[-2] = (int)piVar1;
          *piVar1 = (int)piVar1;
          piVar1 = piVar6 + -1;
          *piVar6 = (int)piVar1;
          *piVar1 = (int)piVar1;
          piVar1 = piVar6 + 1;
          piVar6 = piVar6 + 8;
        } while (piVar1 < (int *)(piVar3[7] + iVar8));
      }
      uVar2 = ntohs(*(u_short *)(param_3 + 0xe));
      if (uVar2 < 0x240) {
        uVar2 = 0x240;
      }
      else if (0x1000 < uVar2) {
        uVar2 = 0x1000;
      }
      *(u_short *)(piVar3 + 0x25) = uVar2;
      uVar5 = *(uint *)(param_1 + 0x10);
      if ((uVar5 == 0) && (piVar3[9] == 0)) {
        piVar3[0x26] = 0x1000;
      }
      else {
        if ((uint)piVar3[9] <= uVar5) {
          uVar5 = piVar3[9];
        }
        piVar3[0x26] = (uVar5 >> 0x10) << 0xc;
      }
      if (((uint)piVar3[0x26] < 0x1000) || (0x1000 < (uint)piVar3[0x26])) {
        piVar3[0x26] = 0x1000;
      }
      if (*(uint *)(param_1 + 0xc) == 0) {
        uVar4 = 0x1000;
      }
      else {
        uVar4 = (*(uint *)(param_1 + 0xc) >> 0x10) << 0xc;
      }
      uVar7 = ntohl(*(u_long *)(param_3 + 0x10));
      if (uVar7 < uVar4) {
        uVar4 = ntohl(*(u_long *)(param_3 + 0x10));
      }
      if ((uVar4 < 0x1000) || (0x1000 < uVar4)) {
        uVar4 = 0x1000;
      }
      local_38 = 0xff03;
      local_36 = 1;
      local_34 = 0x2c;
      local_2c = htons(*(u_short *)((int)piVar3 + 6));
      local_2a = htons(*(u_short *)(piVar3 + 0x25));
      local_28 = htonl(uVar4);
      local_24 = htonl(local_8);
      local_20 = htonl(*(u_long *)(param_1 + 0xc));
      local_1c = htonl(*(u_long *)(param_1 + 0x10));
      local_18 = htonl(piVar3[0x1e]);
      local_14 = htonl(piVar3[0x1c]);
      local_10 = htonl(piVar3[0x1d]);
      FUN_00a8a550(piVar3,&local_38,0,0,0);
      return piVar3;
    }
  }
  return (int *)0x0;
}

