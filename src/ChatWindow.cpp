#include "ChatWindow.h"

ChatWindow::ChatWindow(QWidget *parent) : QWidget(parent) {
    // Create widgets
    chatDisplay = new QTextEdit(this);
    chatDisplay->setReadOnly(true);
    
    messageInput = new QLineEdit(this);
    messageInput->setPlaceholderText("Enter your name...");
    
    sendButton = new QPushButton("Send", this);
    
    // Layout
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chatDisplay);
    layout->addWidget(messageInput);
    layout->addWidget(sendButton);
    
    // Connections
    connect(sendButton, &QPushButton::clicked, this, &ChatWindow::sendMessage);
    connect(messageInput, &QLineEdit::returnPressed, this, &ChatWindow::sendMessage);
    
    setWindowTitle("Simple Chatroom");
    resize(400, 300);
}

void ChatWindow::sendMessage() {
    QString name = messageInput->text().trimmed();
    if (!name.isEmpty()) {
        chatDisplay->append("You: " + name);
        chatDisplay->append("Server: Hello " + name + "!");
        messageInput->clear();
    }
}