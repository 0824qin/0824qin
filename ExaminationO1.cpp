#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
// 结构体用于存储单选题信息
typedef struct {
    char question[200];
    char options[4][50];
    char correctAnswer;
} SingleChoiceQuestion;

// 函数用于显示单选题及选项
void displaySingleChoiceQuestion(SingleChoiceQuestion q) {
    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, q.options[i]);
    }
}

// 函数用于判断单选题答案是否正确
int isSingleChoiceAnswerCorrect(char answer, char correctAnswer) {
    return (answer == correctAnswer) || (answer == correctAnswer + 32);
}
void swapQuestions(SingleChoiceQuestion *a, SingleChoiceQuestion *b) {
    SingleChoiceQuestion temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 存储单选题数组
    SingleChoiceQuestion singleChoiceQuestions[20];

    // 初始化区块链技术诞生于哪一年的单选题
    strcpy(singleChoiceQuestions[0].question, "1.区块链技术诞生于哪一年？");
    strcpy(singleChoiceQuestions[0].options[0], "2007");
    strcpy(singleChoiceQuestions[0].options[1], "2008");
    strcpy(singleChoiceQuestions[0].options[2], "2009");
    strcpy(singleChoiceQuestions[0].options[3], "2010");
    singleChoiceQuestions[0].correctAnswer = 'B';

    // 初始化下列算法属于Hash算法的是的单选题
    strcpy(singleChoiceQuestions[1].question, "2.下列算法属于Hash算法的是？");
    strcpy(singleChoiceQuestions[1].options[0], "DES");
    strcpy(singleChoiceQuestions[1].options[1], "IDEA");
    strcpy(singleChoiceQuestions[1].options[2], "SHA");
    strcpy(singleChoiceQuestions[1].options[3], "RSA");
    singleChoiceQuestions[1].correctAnswer = 'C';

    // ......继续初始化其他单选题......

	 // 初始化习近平总书记对于区块链技术的重要讲话发表在何时的单选题
    strcpy(singleChoiceQuestions[2].question, "3.习近平总书记对于区块链技术的重要讲话发表在何时？");
    strcpy(singleChoiceQuestions[2].options[0], "2018年10月24日");
    strcpy(singleChoiceQuestions[2].options[1], "2019年10月24日");
    strcpy(singleChoiceQuestions[2].options[2], "2019年10月1日");
    strcpy(singleChoiceQuestions[2].options[3], "2018年10月1日");
    singleChoiceQuestions[2].correctAnswer = 'B';
	// 初始化区块链产业应用的关键是 的单选题
    strcpy(singleChoiceQuestions[3].question, "4.区块链产业应用的关键是");
    strcpy(singleChoiceQuestions[3].options[0], "区块链技术");
    strcpy(singleChoiceQuestions[3].options[1], "产业应用协议的设计");
    strcpy(singleChoiceQuestions[3].options[2], "产业资金");
    strcpy(singleChoiceQuestions[3].options[3], "产业相关人才");
    singleChoiceQuestions[3].correctAnswer = 'B';
	// 初始化产业区块链应用协议涉及的最后一步是？的单选题
    strcpy(singleChoiceQuestions[4].question, "5.产业区块链应用协议涉及的最后一步是？");
    strcpy(singleChoiceQuestions[4].options[0], "不同利益主体管理不同验证点");
    strcpy(singleChoiceQuestions[4].options[1], "数字资产的流转交易");
    strcpy(singleChoiceQuestions[4].options[2], "为协作各方发放激励");
    strcpy(singleChoiceQuestions[4].options[3], "措施补救或纠正错误");
    singleChoiceQuestions[4].correctAnswer = 'D';
	// 初始化关于数字证书，下列说法不正确的是 的单选题
    strcpy(singleChoiceQuestions[5].question, "6.关于数字证书，下列说法不正确的是");
    strcpy(singleChoiceQuestions[5].options[0], "英文翻译digital certificate");
    strcpy(singleChoiceQuestions[5].options[1], "提供了一种在Internet上验证身份的方式");
    strcpy(singleChoiceQuestions[5].options[2], "采用了数字签名技术");
    strcpy(singleChoiceQuestions[5].options[3], "不需要权威CA机构签发");
    singleChoiceQuestions[5].correctAnswer = 'D';
    // 初始化在容器外调用容器在内部执行命令，使用到的Docker命令为 的单选题
    strcpy(singleChoiceQuestions[6].question, "7.在容器外调用容器在内部执行命令，使用到的Docker命令为");
    strcpy(singleChoiceQuestions[6].options[0], "docker log");
    strcpy(singleChoiceQuestions[6].options[1], "docker exec");
    strcpy(singleChoiceQuestions[6].options[2], "docker ps");
    strcpy(singleChoiceQuestions[6].options[3], "docker run");
    singleChoiceQuestions[6].correctAnswer = 'B';
	// 初始化FISCO BCOS评测的TPS可达多少？的单选题
    strcpy(singleChoiceQuestions[7].question, "8.FISCO BCOS评测的TPS可达多少？");
    strcpy(singleChoiceQuestions[7].options[0], "1000");
    strcpy(singleChoiceQuestions[7].options[1], "2000");
    strcpy(singleChoiceQuestions[7].options[2], "500");
    strcpy(singleChoiceQuestions[7].options[3], "20000");
    singleChoiceQuestions[7].correctAnswer = 'D';
	// 初始化FISCO BCOS整体架构可分为几层？的单选题
    strcpy(singleChoiceQuestions[8].question, "9.FISCO BCOS整体架构可分为几层？");
    strcpy(singleChoiceQuestions[8].options[0], "3");
    strcpy(singleChoiceQuestions[8].options[1], "5");
    strcpy(singleChoiceQuestions[8].options[2], "4");
    strcpy(singleChoiceQuestions[8].options[3], "2");
    singleChoiceQuestions[8].correctAnswer = 'C';
	// 初始化FISCO BCOS接口层不包括？的单选题
    strcpy(singleChoiceQuestions[9].question, "10.FISCO BCOS接口层不包括？");
    strcpy(singleChoiceQuestions[9].options[0], "交易池");
    strcpy(singleChoiceQuestions[9].options[1], "区块链");
    strcpy(singleChoiceQuestions[9].options[2], "区块执行器");
    strcpy(singleChoiceQuestions[9].options[3], "区块管理端");
    singleChoiceQuestions[9].correctAnswer = 'D';
	// 初始化FISCO BCOS调度层包含几个模块？的单选题
    strcpy(singleChoiceQuestions[10].question, "11.FISCO BCOS调度层包含几个模块？");
    strcpy(singleChoiceQuestions[10].options[0], "3");
    strcpy(singleChoiceQuestions[10].options[1], "2");
    strcpy(singleChoiceQuestions[10].options[2], "4");
    strcpy(singleChoiceQuestions[10].options[3], "1");
    singleChoiceQuestions[10].correctAnswer = 'B';
	// 初始化智能合约的英文是以下哪一个？的单选题
    strcpy(singleChoiceQuestions[11].question, "12.智能合约的英文是以下哪一个？");
    strcpy(singleChoiceQuestions[11].options[0], "Smart contracts");
    strcpy(singleChoiceQuestions[11].options[1], "Smart contract");
    strcpy(singleChoiceQuestions[11].options[2], "contract Smart");
    strcpy(singleChoiceQuestions[11].options[3], "contracts Smart");
    singleChoiceQuestions[11].correctAnswer = 'B';
	// 初始化在以太坊中我们书写智能合约的语言是？的单选题
    strcpy(singleChoiceQuestions[12].question, "13.在以太坊中我们书写智能合约的语言是？");
    strcpy(singleChoiceQuestions[12].options[0], "Go");
    strcpy(singleChoiceQuestions[12].options[1], "Java");
    strcpy(singleChoiceQuestions[12].options[2], "Solidity");
    strcpy(singleChoiceQuestions[12].options[3], "Python");
    singleChoiceQuestions[12].correctAnswer = 'C';
	// 初始化以太坊上的有可编程的智能合约，智能合约实在以太坊虚拟机上运行的那么以太坊虚拟机的简称是什么？的单选题
    strcpy(singleChoiceQuestions[13].question, "14.以太坊上的有可编程的智能合约，智能合约实在以太坊虚拟机上运行的那么以太坊虚拟机的简称是什么？");
    strcpy(singleChoiceQuestions[13].options[0], "EVN");
    strcpy(singleChoiceQuestions[13].options[1], "ETF");
    strcpy(singleChoiceQuestions[13].options[2], "EVM");
    strcpy(singleChoiceQuestions[13].options[3], "ETH");
    singleChoiceQuestions[13].correctAnswer = 'C';
	// 初始化数字签名为保证其不可更改，双方约定使用什么？的单选题
   strcpy(singleChoiceQuestions[14].question, "15.数字签名为保证其不可更改，双方约定使用什么？");
   strcpy(singleChoiceQuestions[14].options[0], "HASH算法");
   strcpy(singleChoiceQuestions[14].options[1], "RSA算法");
   strcpy(singleChoiceQuestions[14].options[2], "CAP算法");
   strcpy(singleChoiceQuestions[14].options[3], "ACR算法");
   singleChoiceQuestions[14].correctAnswer = 'A';
	// 初始化以下关于数字签名正确的是 的单选题
    strcpy(singleChoiceQuestions[15].question, "16.以下关于数字签名正确的是");
    strcpy(singleChoiceQuestions[15].options[0], "数字签名是在所传输的数据后附加一段和传输数据毫无关系的数据信息");
    strcpy(singleChoiceQuestions[15].options[1], "数字签名能够解决数据的加密传输，即安全传输问题");
    strcpy(singleChoiceQuestions[15].options[2], "数字签名一般采用对称加密机制");
    strcpy(singleChoiceQuestions[15].options[3], "数字签名能够解决篡改、伪造等安全性问题");
	 singleChoiceQuestions[15].correctAnswer = 'D';
		// 初始化什么原则保证只有发送方与接收方能访问消息内容的单选题
    strcpy(singleChoiceQuestions[16].question, "17.什么原则保证只有发送方与接收方能访问消息内容");
    strcpy(singleChoiceQuestions[16].options[0], "保密性");
    strcpy(singleChoiceQuestions[16].options[1], "鉴别");
    strcpy(singleChoiceQuestions[16].options[2], "完整性");
    strcpy(singleChoiceQuestions[16].options[3], "访问控制");
    singleChoiceQuestions[16].correctAnswer = 'A';
	// 初始化在区块链中存在Merkle树结构，那么最上方的称为？的单选题
    strcpy(singleChoiceQuestions[17].question, "18.在区块链中存在Merkle树结构，那么最上方的称为？");
    strcpy(singleChoiceQuestions[17].options[0], "Merkle支");
    strcpy(singleChoiceQuestions[17].options[1], "Merkle根");
    strcpy(singleChoiceQuestions[17].options[2], "Merkle叶");
    strcpy(singleChoiceQuestions[17].options[3], "Merkle花");
    singleChoiceQuestions[17].correctAnswer = 'B';
	// 初始化区块链运用的技术不包含哪一项？的单选题
    strcpy(singleChoiceQuestions[18].question, "19.区块链运用的技术不包含哪一项？");
    strcpy(singleChoiceQuestions[18].options[0], "P2P网络");
    strcpy(singleChoiceQuestions[18].options[1], "密码学");
    strcpy(singleChoiceQuestions[18].options[2], "共识算法");
    strcpy(singleChoiceQuestions[18].options[3], "大数据");
    singleChoiceQuestions[18].correctAnswer = 'D';
	// 初始化以下哪个不是区块链的特性的单选题
    strcpy(singleChoiceQuestions[19].question, "20.以下哪个不是区块链的特性");
    strcpy(singleChoiceQuestions[19].options[0], "不可篡改");
    strcpy(singleChoiceQuestions[19].options[1], "去中心化");
    strcpy(singleChoiceQuestions[19].options[2], "高升值");
    strcpy(singleChoiceQuestions[19].options[3], "可追溯");
    singleChoiceQuestions[19].correctAnswer = 'C'; // 生成随机数种子
    srand((unsigned int)time(NULL));
    // 打乱单选题数组的顺序
    for (int i = 19; i > 0; i--) {
        int j = rand() % (i + 1);
        swapQuestions(&singleChoiceQuestions[i], &singleChoiceQuestions[j]);
    }
    char answer;
    int correct;

    // 遍历单选题数组，处理每个问题
    for (int i = 0; i < 20; i++) {
        correct = 0;
        while (!correct) {
            displaySingleChoiceQuestion(singleChoiceQuestions[i]);
            printf("请输入你的答案（A、B、C、D）：");
            scanf(" %c", &answer);

            if (isSingleChoiceAnswerCorrect(answer, singleChoiceQuestions[i].correctAnswer)) {
                printf("答案正确！恭喜你。\n");
                correct = 1;
            } else {
                printf("很遗憾，答案错误，正确答案是：%c。\n", singleChoiceQuestions[i].correctAnswer);
                printf("请重新输入\n");
            }
        }
    }

    return 0;
}
