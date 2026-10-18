// FUN_00a43300 @ 00a43300 body=[[00a43300, 00a438e7]]


void FUN_00a43300(int param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  char cVar5;
  undefined1 local_78 [68];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  uint local_14;
  undefined4 local_10;
  char local_9;
  
  cVar5 = *(char *)(param_2 + 0x18) == '\0';
  local_10 = 0;
  local_9 = cVar5;
  if ((bool)cVar5) {
    local_10 = FUN_009b6df0();
  }
  if (*(int *)(in_ECX + 0x54) == 0) {
    if ((bool)cVar5) {
      FUN_009959e0(param_3,*(int *)(in_ECX + 100) != -1);
    }
    (**(code **)(**(int **)(in_ECX + 4) + 0xc))(*(int **)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
  }
  else {
    if ((*(int *)(in_ECX + 0x78) != 0) && (iVar2 = *(int *)(param_1 + 0x6bc88), iVar2 != 0)) {
      uVar1 = *(undefined8 *)(iVar2 + 0x114);
      local_2c = *(float *)(iVar2 + 0x11c);
      local_24._0_4_ = (float)uVar1;
      local_34 = (float)local_24;
      local_24._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_30 = local_24._4_4_;
      local_28 = local_18;
      local_24 = uVar1;
      local_1c = local_2c;
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x78),&local_34);
    }
    if (*(int *)(in_ECX + 0x88) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x78))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x88),*(undefined4 *)(in_EAX + 0xe4));
    }
    if (*(int *)(in_ECX + 0x8c) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x78))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x8c),*(undefined4 *)(in_EAX + 0xe8));
    }
    if (*(int *)(in_ECX + 0x7c) != 0) {
      local_34 = *(float *)(in_EAX + 0xc0);
      local_30 = *(float *)(in_EAX + 0xc4);
      local_2c = *(float *)(in_EAX + 200);
      local_28 = DAT_00f092fc;
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x7c),&local_34);
    }
    if (*(int *)(in_ECX + 0x80) != 0) {
      local_34 = *(float *)(in_EAX + 0xcc);
      local_30 = *(float *)(in_EAX + 0xd0);
      local_2c = *(float *)(in_EAX + 0xd4);
      local_28 = DAT_00f092fc;
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x80),&local_34);
    }
    if (*(int *)(in_ECX + 0x84) != 0) {
      local_34 = *(float *)(in_EAX + 0xd8);
      local_30 = *(float *)(in_EAX + 0xdc);
      local_2c = *(float *)(in_EAX + 0xe0);
      local_28 = DAT_00f092fc;
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x84),&local_34);
    }
    if (*(int *)(in_ECX + 0x90) != 0) {
      uVar4 = *(uint *)(in_ECX + 0x5c);
      local_34 = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
      local_30 = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
      local_2c = (float)(uVar4 & 0xff) * 0.003921569;
      local_28 = (float)(uVar4 >> 0x18) * 0.003921569;
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x90),&local_34);
    }
    if (*(int *)(in_ECX + 0x94) != 0) {
      local_34 = *(float *)(in_ECX + 0x1c);
      local_30 = *(float *)(in_ECX + 0x20);
      local_2c = *(float *)(in_ECX + 0x24);
      local_28 = *(float *)(in_ECX + 0x28);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x94),&local_34);
    }
    if (*(int *)(in_ECX + 0x98) != 0) {
      local_34 = *(float *)(in_ECX + 0x2c);
      local_30 = *(float *)(in_ECX + 0x30);
      local_2c = *(float *)(in_ECX + 0x34);
      local_28 = *(float *)(in_ECX + 0x38);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x98),&local_34);
    }
    if (*(int *)(in_ECX + 0x9c) != 0) {
      local_34 = *(float *)(in_ECX + 0xc);
      local_30 = *(float *)(in_ECX + 0x10);
      local_2c = *(float *)(in_ECX + 0x14);
      local_28 = *(float *)(in_ECX + 0x18);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0x9c),&local_34);
    }
    if (*(int *)(in_ECX + 0xa0) != 0) {
      local_34 = *(float *)(in_ECX + 0x3c);
      local_30 = *(float *)(in_ECX + 0x40);
      local_2c = *(float *)(in_ECX + 0x44);
      local_28 = *(float *)(in_ECX + 0x48);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xa0),&local_34);
    }
    if (*(int *)(in_ECX + 0xa4) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x78))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xa4),*(undefined4 *)(in_ECX + 0x4c));
    }
    if (*(int *)(in_ECX + 0xcc) != 0) {
      local_34 = *(float *)(param_2 + 8);
      local_30 = *(float *)(param_2 + 0xc);
      local_2c = *(float *)(param_2 + 0x10);
      local_28 = *(float *)(param_2 + 0x14);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x88))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xcc),&local_34);
    }
    if (*(int *)(in_ECX + 0xa8) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x98))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xa8));
    }
    if (*(int *)(in_ECX + 0xac) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x98))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xac),in_EAX + 0x40);
    }
    if (*(int *)(in_ECX + 0xb0) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x98))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xb0),in_EAX + 0x80);
    }
    if (*(int *)(in_ECX + 0xb4) != 0) {
      D3DXMatrixMultiply(local_78);
      D3DXMatrixMultiply(local_78,local_78,in_EAX + 0x80);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x98))
                (*(int **)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0xb4),local_78);
    }
    if (*(int *)(in_ECX + 0xb8) != 0) {
      D3DXMatrixMultiply(local_78);
      (**(code **)(**(int **)(in_ECX + 0x54) + 0x98))
                (*(int **)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0xb8),local_78);
    }
    if (*(int *)(in_ECX + 0xbc) != 0) {
      uVar4 = *(uint *)(in_ECX + 100);
      if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(uVar4 * 0x2c + 4 + *(int *)(in_ECX + 0x50));
      }
      (**(code **)(**(int **)(in_ECX + 0x54) + 0xd0))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xbc),uVar3);
    }
    if (*(int *)(in_ECX + 0xc0) != 0) {
      uVar4 = *(uint *)(in_ECX + 0x68);
      if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(uVar4 * 0x2c + 4 + *(int *)(in_ECX + 0x50));
      }
      (**(code **)(**(int **)(in_ECX + 0x54) + 0xd0))
                (*(int **)(in_ECX + 0x54),*(int *)(in_ECX + 0xc0),uVar3);
    }
    (**(code **)(**(int **)(in_ECX + 0x54) + 0xfc))(*(int **)(in_ECX + 0x54),&local_14,0);
    uVar4 = 0;
    if (local_14 != 0) {
      do {
        (**(code **)(**(int **)(in_ECX + 0x54) + 0x100))(*(int **)(in_ECX + 0x54),uVar4);
        (**(code **)(**(int **)(in_ECX + 0x54) + 0x104))(*(int **)(in_ECX + 0x54));
        if (local_9 != '\0') {
          FUN_009959e0(param_3,*(int *)(in_ECX + 100) != -1);
        }
        (**(code **)(**(int **)(in_ECX + 4) + 0xc))
                  (*(int **)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
        (**(code **)(**(int **)(in_ECX + 0x54) + 0x108))(*(int **)(in_ECX + 0x54));
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_14);
    }
    (**(code **)(**(int **)(in_ECX + 0x54) + 0x10c))(*(int **)(in_ECX + 0x54));
    cVar5 = local_9;
  }
  if (cVar5 != '\0') {
    FUN_00995b80();
  }
  return;
}

