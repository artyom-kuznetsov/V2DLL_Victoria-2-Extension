// FUN_0068fb20 @ 0068fb20 body=[[0068fb20, 0068fb73]]


void FUN_0068fb20(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  int iVar1;
  
  *(undefined1 *)((int)in_EAX + -7) = 1;
  *in_EAX = tbb::internal::
            start_for<tbb::blocked_range<unsigned_int>,_anon_669BE687::ProcessPopsAndProvinces,tbb::auto_partitioner>
            ::vftable;
  in_EAX[1] = *(undefined4 *)(in_ECX + 4);
  iVar1 = ((uint)(*(int *)(in_ECX + 4) - *(int *)(in_ECX + 8)) >> 1) + *(int *)(in_ECX + 8);
  *(int *)(in_ECX + 4) = iVar1;
  in_EAX[2] = iVar1;
  in_EAX[3] = *(undefined4 *)(in_ECX + 0xc);
  *(undefined8 *)(in_EAX + 4) = *(undefined8 *)(in_ECX + 0x10);
  *(undefined8 *)(in_EAX + 6) = *(undefined8 *)(in_ECX + 0x18);
  *(undefined8 *)(in_EAX + 8) = *(undefined8 *)(in_ECX + 0x20);
  *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) >> 1;
  in_EAX[10] = *(undefined4 *)(in_ECX + 0x28);
  return;
}

