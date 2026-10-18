// FUN_0099d980 @ 0099d980 body=[[0099d980, 0099da16]]


void FUN_0099d980(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined8 *puVar3;
  int *in_ECX;
  int unaff_EDI;
  float10 fVar4;
  
  fVar4 = (float10)(**(code **)(**(int **)(unaff_EDI + 0x6bd68) + 0x14))();
  (**(code **)(*in_ECX + 0x108))(0);
  (**(code **)(*in_ECX + 0x34))();
  iVar1 = *(int *)(unaff_EDI + 0x6bd5c);
  puVar3 = (undefined8 *)FUN_00aae9af(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = CONCAT44(in_EAX,in_ECX);
    *(float *)(puVar3 + 1) = (float)fVar4;
    *(int *)((int)puVar3 + 0xc) = iVar1;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined1 *)((int)puVar3 + 0x14) = 0;
  }
  iVar2 = *(int *)(unaff_EDI + 0x6bd60);
  *(undefined8 **)(unaff_EDI + 0x6bd5c) = puVar3;
  *(int *)(unaff_EDI + 0x6bd60) = iVar2 + 1;
  if (iVar2 != 0) {
    *(undefined8 **)(iVar1 + 0x10) = puVar3;
    return;
  }
  *(undefined8 **)(unaff_EDI + 0x6bd58) = puVar3;
  return;
}

