// FUN_009c1d40 @ 009c1d40 body=[[009c1d40, 009c1d94]]


int FUN_009c1d40(void)

{
  int *piVar1;
  bool bVar2;
  int *in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 8) +
                    ((uint)(*in_EAX * 0x10000 + in_EAX[1]) % *(uint *)(in_ECX + 4)) * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((*(int *)(*piVar1 + 0xc) == in_EAX[1]) && (*(int *)(*piVar1 + 8) == *in_EAX)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) break;
    piVar1 = (int *)piVar1[1];
  }
  return *piVar1;
}

