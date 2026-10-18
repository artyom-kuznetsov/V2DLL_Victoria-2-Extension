// FUN_00a3d1e0 @ 00a3d1e0 body=[[00a3d1e0, 00a3d1ff]]


void FUN_00a3d1e0(ushort param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x140) = (uint)param_1;
  if (100 < param_1) {
    *(undefined4 *)(in_ECX + 0x140) = 100;
  }
  return;
}

