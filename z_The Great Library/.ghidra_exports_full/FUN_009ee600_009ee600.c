// FUN_009ee600 @ 009ee600 body=[[009ee600, 009ee60d]]


void FUN_009ee600(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x70) == 3) {
    *(undefined4 *)(in_ECX + 0x70) = 0;
  }
  return;
}

