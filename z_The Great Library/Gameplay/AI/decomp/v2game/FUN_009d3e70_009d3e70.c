// FUN_009d3e70 @ 009d3e70 body=[[009d3e70, 009d3e7c] [009d3e80, 009d3e8d]]


void FUN_009d3e70(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x129);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x129);
  }
  return;
}

