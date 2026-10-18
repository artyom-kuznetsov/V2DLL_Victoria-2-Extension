// FUN_009f69d0 @ 009f69d0 body=[[009f69d0, 009f6abc] [009f6ac0, 009f6ad1]]


void FUN_009f69d0(void)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  cVar1 = (**(code **)(*in_ECX + 0xb4))();
  if (cVar1 == '\0') {
    if ((*(short *)((int)in_ECX + 0x3a) == 0) && ((short)in_ECX[0xe] == 0)) {
      FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
      FUN_009f7cb0(in_ECX);
    }
    else {
      FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
      FUN_009f7cb0(in_ECX);
      (**(code **)(*in_ECX + 0x6c))();
    }
    piVar2 = (int *)(**(code **)(*in_ECX + 0xd0))();
    *(short *)(in_ECX + 0x10) = (short)(piVar2[1] - *piVar2 >> 5);
    if (piVar2[1] - *piVar2 >> 5 < (int)(*(ushort *)((int)in_ECX + 0x3a) + 1)) {
      (**(code **)(*in_ECX + 0x88))();
    }
    FUN_00409350(&DAT_00ded94d,0);
    for (puVar3 = (undefined4 *)in_ECX[1]; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[2]) {
      (**(code **)(*(int *)*puVar3 + 8))();
    }
  }
  else {
    (**(code **)(*in_ECX + 0xc4))();
    in_ECX[0xe] = *(int *)((int)in_ECX + 0x6e);
    FUN_00409350(&DAT_00ded94d,0);
    puVar3 = (undefined4 *)in_ECX[1];
    if (puVar3 != (undefined4 *)0x0) {
      do {
        (**(code **)(*(int *)*puVar3 + 8))();
        puVar3 = (undefined4 *)puVar3[2];
      } while (puVar3 != (undefined4 *)0x0);
      return;
    }
  }
  return;
}

