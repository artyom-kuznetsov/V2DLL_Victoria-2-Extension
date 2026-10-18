// FUN_00a4f210 @ 00a4f210 body=[[00a4f210, 00a4f2b6]]


void FUN_00a4f210(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x3c))(*(int **)(in_ECX + 0xe0),0x10,&local_8);
  piVar3 = *(int **)(in_ECX + 0xe0);
  piVar4 = piVar3;
  uVar1 = (**(code **)(*piVar3 + 0x18))(piVar3,&local_18,&local_c);
  uVar1 = D3DXGetFVFVertexSize(uVar1);
  uVar2 = (**(code **)(*piVar3 + 0x14))(piVar3,uVar1);
  D3DXComputeBoundingSphere(local_8,uVar2,piVar3,uVar1,piVar4);
  *(undefined4 *)(in_ECX + 0x78) = local_18;
  *(undefined4 *)(in_ECX + 0x7c) = local_14;
  *(undefined4 *)(in_ECX + 0x80) = local_10;
  *(float *)(in_ECX + 0x88) = *(float *)(in_ECX + 0x124) * local_c;
  (**(code **)(**(int **)(in_ECX + 0xe0) + 0x40))(*(int **)(in_ECX + 0xe0));
  return;
}

