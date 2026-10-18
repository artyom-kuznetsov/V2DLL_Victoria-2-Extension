// FUN_009f6ae0 @ 009f6ae0 body=[[009f6ae0, 009f6b71]]


void FUN_009f6ae0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0xb4))();
  if (cVar1 == '\0') {
    iVar2 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
    if (iVar2 != in_ECX[10]) {
      FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
      FUN_009f7cb0(in_ECX);
    }
  }
  else {
    (**(code **)(*in_ECX + 0xc4))();
    if (((*(ushort *)((int)in_ECX + 0x6e) < *(ushort *)(in_ECX + 0xe)) &&
        ((short)in_ECX[0x1c] == *(short *)((int)in_ECX + 0x3a))) ||
       (*(ushort *)(in_ECX + 0x1c) < *(ushort *)((int)in_ECX + 0x3a))) {
      in_ECX[0xe] = *(int *)((int)in_ECX + 0x6e);
      FUN_00409350(&DAT_00ded94d,0);
      return;
    }
  }
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

