// FUN_0061ac20 @ 0061ac20 body=[[0061ac20, 0061ac3d]]


void FUN_0061ac20(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int *in_ECX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  if (((int *)*in_ECX != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*in_ECX, puVar1 != (undefined4 *)0x0)) {
    *in_EAX = *puVar1;
  }
  return;
}

