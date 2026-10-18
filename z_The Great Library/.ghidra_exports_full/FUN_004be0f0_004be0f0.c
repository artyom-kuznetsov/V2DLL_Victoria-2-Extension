// FUN_004be0f0 @ 004be0f0 body=[[004be0f0, 004be13d]]


void FUN_004be0f0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int *in_ECX;
  
  if ((char)in_ECX[3] == '\0') {
    iVar1 = *(int *)(in_EAX + 0x27c);
    iVar2 = *(int *)(in_EAX + 0x278);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x27c) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x278) = iVar2;
    }
    if (in_EAX == *in_ECX) {
      *in_ECX = iVar1;
    }
    if (in_EAX == in_ECX[1]) {
      in_ECX[1] = iVar2;
    }
    in_ECX[2] = in_ECX[2] + -1;
    *(undefined4 *)(in_EAX + 0x278) = 0;
    *(undefined4 *)(in_EAX + 0x27c) = 0;
  }
  return;
}

