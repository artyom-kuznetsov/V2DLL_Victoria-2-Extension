// FUN_009e5a10 @ 009e5a10 body=[[009e5a10, 009e5ab9]]


void FUN_009e5a10(void)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x54))();
  FUN_00409350("graph_entry",0xb);
  piVar1 = (int *)FUN_009d0560();
  (**(code **)(*piVar1 + 0xa4))();
  FUN_009e6810();
  piVar2 = (int *)(**(code **)(*piVar1 + 0x54))();
  (**(code **)(*piVar2 + 0x80))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))();
  (**(code **)(*piVar1 + 0x74))();
  return;
}

