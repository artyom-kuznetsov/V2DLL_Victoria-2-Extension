// FUN_00a4f0e0 @ 00a4f0e0 body=[[00a4f0e0, 00a4f202]]


void FUN_00a4f0e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x3c))(*(int **)(in_ECX + 0xe0),0x10,&local_8);
  piVar3 = *(int **)(in_ECX + 0xe0);
  piVar4 = piVar3;
  uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,&local_14,&local_20);
  uVar1 = D3DXGetFVFVertexSize(uVar1);
  uVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,uVar1);
  D3DXComputeBoundingBox(local_8,uVar2,piVar3,uVar1,piVar4);
  *(float *)(in_ECX + 0x58) = *(float *)(in_ECX + 0x124) * local_14;
  *(float *)(in_ECX + 0x5c) = *(float *)(in_ECX + 0x124) * local_10;
  *(float *)(in_ECX + 0x60) = *(float *)(in_ECX + 0x124) * local_c;
  *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x124) * local_20;
  *(float *)(in_ECX + 0x6c) = *(float *)(in_ECX + 0x124) * local_1c;
  *(float *)(in_ECX + 0x70) = *(float *)(in_ECX + 0x124) * local_18;
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x40))(*(int **)(in_ECX + 0xe0));
  return;
}

