# 说明

- 本目录下仅存放编程题代码，练习题部分在该文件中。
- 使用时请自行核对选择题选项，避免顺序不同提交错误答案。

# 练习题部分

### 4894
设双向循环链表中结点的结构为（data，lLink，rLink），且不带附加头结点。若想在结点*p之后插入结点*s，则应执行以下哪个操作？
- [ ] A: s->lLink=p; s->rLink=p->rLink; p->rLink=s; p->rLink->lLink=s;
- [ ] B: p->rLink=s; s->lLink=p; p->rLink->lLink=s; s->rLink=p->rLink;
- [ ] C: p->rLink=s; p->rLink->lLink=s; s->lLink=p; s->rLink=p->rLink;
- [x] D: s->lLink=p; s->rLink=p->rLink; p->rLink->lLink=s; p->rLink=s;

### 4893
设rear是指向非空的带附加头结点的单循环链表的链尾结点的指针。若想删除链表第一个结点，则应执行以下哪个操作
- [ ] A: rear=rear->next->next; delete rear;
- [ ] B: s=rear; rear=rear->next; delete s;
- [ ] C: rear=rear->next; delete rear;
- [x] D: s=rear->next->next; rear->next->next=s->next; delete s;

### 4892
非空的循环单链表first的链尾结点（由p所指向）满足（      ）
- [x] A: p->next==first;
- [ ] B: p->next==NULL;
- [ ] C: p==NULL;
- [ ] D: p==first;

### 4891
给定有n个元素的一维数组，建立一个有序单链表的时间复杂度为（      ）
- [x] A: O(n^2)
- [ ] B: O(1)
- [ ] C: O(n)
- [ ] D: O(nlog2n)

### 4890
若想在单链表中摘除结点\*p（\*p既不是第一个也不是最后一个结点）的直接后继，则应执行以下哪个操作？
- [ ] A: p->next=p->next;
- [x] B: p->next=p->next->next;
- [ ] C: p=p->next; p->next=p->next->next;
- [ ] D: p=p->next->next;

### 4889
已知单链表中结点\*p不是链尾结点，若要在\*p之后插入结点\*s，则应执行下列哪个操作？
- [ ] A: s->link=p->link; p=s;
- [ ] B: s->link=p; p->link=s;
- [ ] C: p->link=s; s->link=p;
- [x] D: s->link=p->link; p->link=s;

### 4888
已知单链表中结点\*q是结点\*p的直接前驱，若在\*q与\*p之间插入结点\*s，则应执行以下哪个操作？
- [ ] A: p->link=s->link; s->link=p;
- [ ] B: s->link=p->link; p->link=s;
- [x] C: s->link=p; q->link=s;
- [ ] D: p->link=s; s->link=q;
