// FUN_00a6d470 @ 00a6d470 body=[[00a6d470, 00a6d5dd]]


void FUN_00a6d470(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  undefined4 uStack_14;
  undefined1 local_10 [12];
  
  if (((*(char *)((int)in_ECX + 0x29e) == '\0') && ((char)in_ECX[0xa7] == '\0')) &&
     (*(undefined1 *)((int)in_ECX + 0x29e) = 1, (short)in_ECX[0x7b] != 0)) {
    if ((in_ECX[0x73] == 0) && (in_ECX[0x74] == 0)) {
      piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x79] + 0x4c))(local_10);
      in_ECX[0x73] = *piVar3;
      in_ECX[0x74] = piVar3[1];
    }
    puVar4 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x79] + 0x4c))(local_10);
    uVar1 = *puVar4;
    iVar2 = in_ECX[0x73];
    iVar5 = (**(code **)(*(int *)in_ECX[0x79] + 0x4c))(&uStack_14);
    *(short *)((int)in_ECX + 0x1c6) =
         *(short *)((int)in_ECX + 0x1c6) + ((short)*(undefined4 *)(iVar5 + 4) - (short)in_ECX[0x74])
    ;
    *(short *)(in_ECX + 0x71) = (short)in_ECX[0x71] + ((short)uVar1 - (short)iVar2);
    iVar2 = in_ECX[0x1b];
    uStack_14 = *(undefined4 *)(iVar2 + 0x6b9c0);
    if (*(int *)(iVar2 + 0x6b9bc) + -5 < (int)(short)in_ECX[0x71]) {
      *(short *)(in_ECX + 0x71) = (short)*(undefined4 *)(iVar2 + 0x6b9bc) + -5;
    }
    if (*(int *)(iVar2 + 0x6b9c0) + -5 < (int)*(short *)((int)in_ECX + 0x1c6)) {
      *(short *)((int)in_ECX + 0x1c6) = (short)*(undefined4 *)(iVar2 + 0x6b9c0) + -5;
    }
    if ((short)in_ECX[0x71] < 1) {
      *(undefined2 *)(in_ECX + 0x71) = 0;
    }
    if (*(short *)((int)in_ECX + 0x1c6) < 1) {
      *(undefined2 *)((int)in_ECX + 0x1c6) = 0;
    }
    (**(code **)(*in_ECX + 0x18))(in_ECX[0x71]);
    FUN_00a6ded0();
  }
  return;
}

