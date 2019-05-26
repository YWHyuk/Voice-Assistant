# 소프트웨어 명세 분석
## 음성 인식 비서를 구현
### Description
적절한 권한을 가진 사용자(access control)는 음성 인식 비서에게 임의의 시간(Random access)에 특정한 음성 명령 또는 GUI를 통해 서비스를 제공받는다.
### 1.2 Service list (추가 바람)
* Login/Logout
* ...

***
## 2. Session Description
### 2.1 다중 사용자(multi session)을 지원
* 적절한 인증 절차 프로세스를 구현해야 한다.
* 사용자들에게 공유 자원을 공평하게 분배해야 한다.
### 2.2 원격 접속(remote control)을 지원한다.
* 네트워크와 연결이 되어있어야 한다.

***
## 3. Block Diagram
### 3.1 Service Processing Diagram
<img src="https://github.com/YWHyuk/Voice-Assistant/blob/master/doc/service%20processing%20diagram.png" width="90%"></img>
