// FUN_009666b0 @ 009666b0 body=[[009666b0, 009666e8]]


void FUN_009666b0(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int in_EAX;
  
  puVar1 = (uint *)(in_EAX + 0x250);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - param_1;
  *(int *)(in_EAX + 0x254) = (*(int *)(in_EAX + 0x254) - param_2) - (uint)(uVar2 < param_1);
  if ((*(int *)(in_EAX + 0x254) < 1) && (*(int *)(in_EAX + 0x254) < 0)) {
    *(undefined4 *)(in_EAX + 0x250) = 0;
    *(undefined4 *)(in_EAX + 0x254) = 0;
  }
  return;
}

