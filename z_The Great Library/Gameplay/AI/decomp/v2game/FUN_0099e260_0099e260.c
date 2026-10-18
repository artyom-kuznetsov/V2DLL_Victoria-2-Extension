// FUN_0099e260 @ 0099e260 body=[[0099e260, 0099e278] [0099e280, 0099e2a7]]


void FUN_0099e260(void)

{
  int *in_EAX;
  int in_EDX;
  
  *in_EAX = in_EDX;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  if (*(int *)(in_EDX + 4) != 0) {
    do {
      if (*(int *)(*(int *)(in_EDX + 8) + in_EAX[1] * 4) != 0) break;
      in_EAX[1] = in_EAX[1] + 1;
    } while ((uint)in_EAX[1] < *(uint *)(in_EDX + 4));
  }
  in_EAX[2] = *(int *)(*(int *)(in_EDX + 8) + in_EAX[1] * 4);
  return;
}

