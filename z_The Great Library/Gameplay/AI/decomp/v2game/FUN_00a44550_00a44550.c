// FUN_00a44550 @ 00a44550 body=[[00a44550, 00a446b8]]


void FUN_00a44550(void)

{
  int in_EAX;
  undefined8 *puVar1;
  uint uVar2;
  float *pfVar3;
  undefined8 *local_8;
  
  (**(code **)(**(int **)(in_EAX + 0x224) + 0x2c))
            (*(int **)(in_EAX + 0x224),0,*(int *)(in_EAX + 0x1678) * 0xc,&local_8,0x2000);
  uVar2 = 0;
  if (*(int *)(in_EAX + 0x1678) != 0) {
    pfVar3 = (float *)(in_EAX + 0x22c);
    do {
      FUN_00ab047b();
      FUN_00ab047b();
      pfVar3[-1] = pfVar3[3] + pfVar3[-1];
      *pfVar3 = pfVar3[4] + *pfVar3;
      pfVar3[1] = pfVar3[5] + pfVar3[1];
      pfVar3[9] = 0.01;
      if (10000.0 < pfVar3[-1] * pfVar3[-1] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]) {
        pfVar3[-0xffffffff00000001] = 0.0;
        pfVar3[0] = 0.0;
        pfVar3[1] = 0.0;
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 0xd;
    } while (uVar2 < *(uint *)(in_EAX + 0x1678));
  }
  uVar2 = 0;
  if (*(int *)(in_EAX + 0x1678) != 0) {
    puVar1 = (undefined8 *)(in_EAX + 0x228);
    do {
      *local_8 = *puVar1;
      *(undefined4 *)(local_8 + 1) = *(undefined4 *)(puVar1 + 1);
      local_8 = (undefined8 *)((int)local_8 + 0xc);
      uVar2 = uVar2 + 1;
      puVar1 = (undefined8 *)((int)puVar1 + 0x34);
    } while (uVar2 < *(uint *)(in_EAX + 0x1678));
  }
  (**(code **)(**(int **)(in_EAX + 0x224) + 0x30))(*(int **)(in_EAX + 0x224));
  return;
}

